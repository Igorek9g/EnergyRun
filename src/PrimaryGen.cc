
#include <Randomize.hh>
#include "PrimaryGen.hh"

PrimaryGen::PrimaryGen()
{
    gun = new G4ParticleGun(1);
    G4cout<<"Primary particles generator is created successfully\t\tOK!!!"<<G4endl;
}

PrimaryGen::~PrimaryGen()
{ }

void PrimaryGen::GeneratePrimaries(G4Event* anEvent)
{
    gun->SetParticleDefinition(G4Gamma::GammaDefinition());
    gun->SetParticleEnergy(1.662*MeV);
    gun->SetParticlePosition(G4ThreeVector(200*G4UniformRand()-100,200*G4UniformRand()-100,200*G4UniformRand()-100));
    gun->SetParticleMomentumDirection(G4ThreeVector(2*G4UniformRand()-1, 1, 2*G4UniformRand()-1));
    gun->GeneratePrimaryVertex(anEvent);
}

//G4UniformRand()
//    /run/beamOn 10