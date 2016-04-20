#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
struct Proposal
{
    string name;
    double id;
    double price;
    double objects;
    vector<string> products;
    double compliance;
};

bool compareByCompliance(const Proposal &a, const Proposal &b)
{
    return a.compliance > b.compliance;
}
bool compareByPrice(const Proposal &a, const Proposal &b)
{
    return a.price < b.price;
}
bool compareByInput(const Proposal &a, const Proposal &b)
{
    return a.id < b.id;
}

int main()
{
    double requirements, proposals, objects;
    double price;
    string nameR;
    string nameP;
    vector<string> requirementsList;
    vector<Proposal> proposalsList;
    cin>>requirements>>proposals;
    int cases = 0;
    while(requirements != 0 && proposals != 0)
    {
        cases++;
        cin.ignore();
        requirementsList.assign(requirements, "");
        for(int i = 0; i < requirements; i++)
        {
            getline(cin, nameR);
            requirementsList[i] = nameR;
        }

        for(int i = 0; i < proposals; i++)
        {
//            cout<<"DIGITE NOMBRE P: ";
            getline(cin, nameP);
            Proposal p;
            p.name = nameP;
            p.id = i;
            cin>>p.price>>p.objects;
            cin.ignore();
            for(int j = 0; j < p.objects; j++)
            {
//                cout<<"DIGITE NOMBRE R: ";
                getline(cin, nameR);
                p.products.push_back(nameR);
            }
            p.compliance = p.objects/requirements;
//            cout<<" C: "<<p.compliance<<endl;
            proposalsList.push_back(p);
        }
        sort(proposalsList.begin(), proposalsList.end(), compareByCompliance);
        vector<Proposal> sameCompliance;
        sameCompliance.push_back(proposalsList[0]);
        for(int i = 1; i < proposalsList.size(); i++)
        {
            if(proposalsList[i].compliance != proposalsList[i-1].compliance)
            {
                break;
            }
            sameCompliance.push_back(proposalsList[i]);
        }
        if(sameCompliance.size() == 1)
        {
            cout<<"RFP #"<<cases<<endl<<sameCompliance[0].name<<endl;
        }
        else
        {
            sort(sameCompliance.begin(), sameCompliance.end(), compareByPrice);
            vector<Proposal> samePrice;
            samePrice.push_back(sameCompliance[0]);
            for(int i = 1; i < sameCompliance.size(); i++)
            {
                if(sameCompliance[i].price != sameCompliance[i-1].price)
                {
                    break;
                }
                samePrice.push_back(sameCompliance[i]);
            }
            if(samePrice.size() == 1)
            {
                cout<<"RFP #"<<cases<<endl<<sameCompliance[0].name<<endl;
            }
            else
            {
                sort(sameCompliance.begin(), sameCompliance.end(), compareByInput);
                cout<<"RFP #"<<cases<<endl<<sameCompliance[0].name<<endl;
            }
        }
        cin>>requirements>>proposals;
        requirementsList.clear();
    }
    return 0;
}
