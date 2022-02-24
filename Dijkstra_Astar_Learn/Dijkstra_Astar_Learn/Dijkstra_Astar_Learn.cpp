// Dijkstra_Astar_Learn.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include"Graph.h"
#include"PathFindingList.h"
#include"NodeRecord.h"
#include"Connection.h"
#include <iostream>
using namespace std;

vector<string> getGraphSolution(Graph& graphP, string start, string end) {
    // j'initialise les open and close list
    PathFindingList open;
    PathFindingList close;
    NodeRecord currentNode;
    vector<Connection>temp;
    string endNode;
    int endNodeCost;
    NodeRecord endNodeRecord;
    vector<string> path;


    // verify if the start and end node exist in the graph
    if (graphP.isNodeExist(start) && graphP.isNodeExist(end)) {
        // initialize startNode
        currentNode = NodeRecord(0, start);
        open.AddNode(currentNode);
    }
    while (open.length() > 0) {

        currentNode = open.getSmallestElement();
        if (currentNode.getName() == end)break;

        temp = graphP.getConnection(currentNode.getName());

        for (int i = 0; i < temp.size(); i++) {
            endNode = temp[i].getToNode();
            endNodeCost = currentNode.getCostSoFar() + temp[i].getCost();
            if (close.isContain(endNode))continue;
            else if (open.isContain(endNode)) {
                endNodeRecord = open.getElementByString(endNode);
                if (endNodeRecord.getCostSoFar() <= endNodeCost)continue;
            }
            else {
                endNodeRecord = NodeRecord();
                endNodeRecord.setName(endNode);
            }
            endNodeRecord.setCost(endNodeCost);
            // attention il y a peut etre une erreur a ce niveau la
            endNodeRecord.setFromNode(temp[i].getFromNode());


            if (!open.isContain(endNode)) {
                open.AddNode(endNodeRecord);
            }

        }

        open.RemoveNode(currentNode);
        close.AddNode(currentNode);
        
    }

    if (currentNode.getName() != end) {
        return{};
    }

    else {
        while (currentNode.getName() != start) {
            path.emplace_back(currentNode.getFromNode());
        }
    return path;
}

       /* temp = graphP.getConnection(currentNode.getName());

        for (int i = 0; i < temp.size(); i++) {
            open.AddNode(NodeRecord(temp[i].getCost(), temp[i].getToNode()));
        }

        for (int i = 0; i < close.getList().size(); i++) {
            open.RemoveNode(close.getList()[i]);
        }

        currentNode.setName(open.getSmallestElement().getName());
        currentNode.setCost(currentNode.getCostSoFar() + open.getSmallestElement().getCostSoFar());
        close.AddNode(currentNode);
        open.RemoveNode(currentNode);

        currentNode.display();*/
}
    
void getSolution(Graph graphP, string start, string end) {

    PathFindingList open;
    PathFindingList close;
    NodeRecord currentNode;
    vector<Connection>temp;
    string endNode;
    int endNodeCost;
    NodeRecord endNodeRecord;
    vector<string> path;

    // verify if my start value and my end value exist in my graph
    if (graphP.isNodeExist(start) && graphP.isNodeExist(end)) {
        // initialize startNode
        currentNode = NodeRecord(0, start);
        //add StartNode in open list.
        open.AddNode(currentNode);
    }

    while (open.length() > 0) {
        //je prend le plus petit element de la open list
        currentNode = open.getSmallestElement();
        //if (currentNode.getName() == end)break;
        path.emplace_back(currentNode.getFromNode());
        // je recupere les connections possible du currentNode
        temp = graphP.getConnection(currentNode.getName());
        //pour chaque connection possible 
        for (int i = 0; i < temp.size(); i++) {
            endNode = temp[i].getToNode();
            endNodeCost = currentNode.getCostSoFar() + temp[i].getCost();
            //je teste si elle est presente dans la close list je continu et passe a la connection suivante;
            if (close.isContain(endNode))continue;
            //presente dans la open list
            else if(open.isContain(endNode)){
                // sauvegarde dans une variable le Node present dans la open list
                endNodeRecord = open.getElementByString(endNode);
                //compare le prix du noeud presnt dans open
                //et le prix du chemin actuelle
                // je passe si il est moins interressant
                if (endNodeRecord.getCostSoFar() <= endNodeCost)continue;
                //sinon je le remplace
                else {
                    open.RemoveNode(endNodeRecord);
                    endNodeRecord.setCost(endNodeCost);
                    endNodeRecord.setFromNode(currentNode.getName());
                    open.AddNode(endNodeRecord);
                }
            }
      
            else{

                //j'initialize endNodeRecord
                endNodeRecord.setName(endNode);
                endNodeRecord.setCost(endNodeCost);
                endNodeRecord.setFromNode(temp[i].getFromNode());
            }
            //si il n'est pas present dans la open list
            if (!open.isContain(endNode)) {
                //je l'ajoute dans la open list
                open.AddNode(endNodeRecord);
            }

        }
        //j'enleve le current Node de la open list;
        open.RemoveNode(currentNode);
        // j'ajoute le current node dans la close list;
        close.AddNode(currentNode);
        

        
    }
    for (int i = 0; i < path.size(); i++) {
        cout << path[i] << endl;
    }
}



int main()
{
    Graph graph;
    vector<string> solution;
    vector<Connection> connection;
    graph.generatePath();
    getSolution(graph, "A", "F");


    /*connection = graph.getConnection("C");
    for (int i = 0; i < connection.size(); i++) {
        connection[i].display();
    }*/

    //graph.displayConnection(graph.connections);
    
    

   
    


    //graph.displayConnection(graph.getConnection("A"));
    
    
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
