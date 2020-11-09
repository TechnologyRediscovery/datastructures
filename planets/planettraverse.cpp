/*
 * planettraverse.cpp
 *
 * Models tree-based solution algorithms
 *
 *  Created on: Nov 9, 2020
 *      Author: edith
 */
#include<cout>
#include<vector>
#include<iostream>

using namespace std;



class DataBundle{
public:
	bool h20;
	bool terrain;

};


class Planet{
public:
	DataBundle planet_data;
	float diameter;
};

class Ship{
public:
	vector<DataBundle> data_sets_retrieved;
	vector<Planet> orbited_planets;



};

class GalaxyState{
public:
	Ship ship;
	vector<Planet> planets;

};

class SearchTools{


};

enum PlanetAction {travel, orbit, retrieve_data};

class SearchTreeNode{
public:
	GalaxyState state;
	GalaxyState parent_state;
	PlanetAction actionToNode;
	float costToNode;
};


int main(){


}

