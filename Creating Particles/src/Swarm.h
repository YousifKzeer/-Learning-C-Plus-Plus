/*
 * Swarm.h
 *
 *  Created on: Jan. 3, 2019
 *      Author: Yousif
 */

#ifndef SWARM_H_
#define SWARM_H_

#include "Particle.h"

namespace fire {

class Swarm {
public:
	const static int NPARTICLES = 5000;
private:
	Particle *m_pParticles;
public:
	Swarm();
	virtual ~Swarm();

	const Particle * const getParticles() { return m_pParticles; };
};

} /* namespace fire */

#endif /* SWARM_H_ */
