/*
 * planettraverse.cpp
 *
 * Models tree-based solution algorithms
 *
 *  Created on: Nov 9, 2020
 *      Author: edith
 */

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


enum PlanetAction {travel, orbit, retrieve_data};

class SearchTreeNode{
public:
	GalaxyState* state;
	GalaxyState* parent_state;
	PlanetAction actionToNode;
	float costToNode;
};

class SearchTools{
public:
	// take in a reference to a GalaxyState object
	// the & dereference operator (get me the address of the object)
	// const maintains read only status on our object
	bool goal_check(const GalaxyState &state_to_check){
		// by "default" we haven't achieved goal
		bool achieved = false;
		// explore our given state, only toggle achieved to true
		// if I have the objects I need and the ship contains
		// at least one DataBundle with true in both fields
		if(state_to_check){
			if(state_to_check.ship){
				Ship s = state_to_check.ship;
				// make sure the ship has a non-empty set of data bundles
				if(!s.data_sets_retrieved.empty()){
					for(DataBundle db: s.data_sets_retrieved){
						// Finally, check the two boolean fields
						if(db.h20 && db.terrain){
							achieved = true;
						}
					}
				}
			}
		}

		return achieved;
	}

	// Function builds a set of child nodes that we can accesss
	// from a given current state of the universe
	//
	vector<GalaxyState> expand_node(const GalaxyState &current_state){
		// TODO: Interrogate the current state and develop
		// a set of GlalaxyState objects with correctly embedded
		// actions that the algorithm can take to reach that state
		// Building individual GalaxyState objects and setting their
		// variables correctly

		// TODO: return vector of GalaxyStates
		return nullptr;
	}


private:
	SearchTreeNode* tree_root;

	// How do we store rules, like ship must orbit before
	// retrieving data?


};



int main(){
	printf("TODO: write my guts!");


}

