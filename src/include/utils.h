#pragma once
/**
 * \brief position of the creature at a given instant
 * @param x x coordinate of the creature
 * @param y y coordinate of the creature
 */
struct Position{
	float x;
	float y;
};
typedef struct Position Position;

/**
 * \brief Each connection between neuron is represented by a connection variable
 * @param srcIdx index of the source neuron
 * @param destIdx index of the destination neuron
 */
struct Connection{
	unsigned srcIdx;
	unsigned destIdx;
};
typedef struct Connection Connection;
