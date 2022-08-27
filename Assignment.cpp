#include <irrlicht.h> //allows to use the irrlicht header file
#include "Movement.h"

using namespace irr;
using namespace video;
using namespace core;
using namespace scene;

#pragma comment(lib,"irrlicht.lib")

int main(void)
{

	KeyEventReceiver ker;

	IrrlichtDevice *device = createDevice(EDT_DIRECT3D9, dimension2d<u32>(1024, 768), 16, false, false, false, &ker);

	u32 lastFrameTime = device->getTimer()->getTime();
	const f32 MOVE_SPEED = 5.0f;
	u32 currentTime = device->getTimer()->getTime();
	u32 elapsed = currentTime - lastFrameTime;
	lastFrameTime = currentTime;

	IVideoDriver *vdriver = device->getVideoDriver();

	ISceneManager *scenemanager = device->getSceneManager();

	IMeshSceneNode *cube = scenemanager->addCubeSceneNode(10.0f);

	if (cube != nullptr)
	{
		cube->setMaterialFlag(EMF_LIGHTING, false);
		cube->setMaterialTexture(0, vdriver->getTexture(""));
		cube->setPosition(vector3df(0.0f, 0.0f, 30.0f));
	}

	IAnimatedMesh *RundownBuildingMesh = scenemanager->getMesh("Media/RundownBuilding/Rundown.3DS");
	IAnimatedMeshSceneNode *RundownBuildingNode = scenemanager->addAnimatedMeshSceneNode(RundownBuildingMesh);
	RundownBuildingNode->setScale(vector3df(10.0f, 10.0f, 10.0f));
	RundownBuildingNode->setMaterialFlag(EMF_LIGHTING, false);
	RundownBuildingNode->setPosition(vector3df(4500, -20, 750));
	RundownBuildingNode->setRotation(vector3df(0, 25, 0));

	IAnimatedMesh *FactoryMesh = scenemanager->getMesh("Media/Factory/Factory.3DS");
	IAnimatedMeshSceneNode *FactoryNode = scenemanager->addAnimatedMeshSceneNode(FactoryMesh);
	FactoryNode->setScale(vector3df(0.225f, 0.225, 0.225f));
	FactoryNode->setMaterialFlag(EMF_LIGHTING, false);
	FactoryNode->setPosition(vector3df(5000,950, -3500));
	FactoryNode->setRotation(vector3df(0,-30, 0));
	//x,y,x right/left,up/down,forward/back

	IAnimatedMesh *OldShopMesh = scenemanager->getMesh("Media/OldShop/Shop.3DS");
	IAnimatedMeshSceneNode *OldShopNode = scenemanager->addAnimatedMeshSceneNode(OldShopMesh);
	OldShopNode->setScale(vector3df(35.0f, 35.0, 35.0f));
	OldShopNode->setMaterialFlag(EMF_LIGHTING, false);
	OldShopNode->setPosition(vector3df(1000, -20, 3000));
	

	IAnimatedMesh *CottageMesh = scenemanager->getMesh("Media/CottageBuilding/Cottage.3DS");
	IAnimatedMeshSceneNode *CottageNode = scenemanager->addAnimatedMeshSceneNode(CottageMesh);
	CottageNode->setScale(vector3df(2.75f, 2.75f, 2.75f));
	CottageNode->setMaterialFlag(EMF_LIGHTING, false);
	CottageNode->setPosition(vector3df(-2750, -20, -5100));
	CottageNode->setRotation(vector3df(0, 140, 0));

	IAnimatedMesh *RuinsMesh = scenemanager->getMesh("Media/Ruins/Ruins.3DS");
	IAnimatedMeshSceneNode *RuinsNode = scenemanager->addAnimatedMeshSceneNode(RuinsMesh);
	RuinsNode->setScale(vector3df(1.5f, 1.5f, 1.5f));
	RuinsNode->setMaterialFlag(EMF_LIGHTING, false);
	RuinsNode->setPosition(vector3df(800, 25, -4500));
	RuinsNode->setRotation(vector3df(0,210,0));

	IAnimatedMesh *BunkerMesh = scenemanager->getMesh("Media/DamagedBunker/Bunker.3DS");
	IAnimatedMeshSceneNode *BunkerNode = scenemanager->addAnimatedMeshSceneNode(BunkerMesh);
	BunkerNode->setScale(vector3df(0.2f, 0.2f, 0.2f));
	BunkerNode->setMaterialFlag(EMF_LIGHTING, false);
	BunkerNode->setPosition(vector3df(7200, 225, 0));
	BunkerNode->setRotation(vector3df(0, 140, 0));

	IAnimatedMesh *DebrisMesh = scenemanager->getMesh("Media/Debris/Debris.3DS");
	IAnimatedMeshSceneNode *DebrisNode = scenemanager->addAnimatedMeshSceneNode(DebrisMesh);
	DebrisNode->setScale(vector3df(0.1f, 0.1f, 0.1f));
	DebrisNode->setMaterialFlag(EMF_LIGHTING, false);
	DebrisNode->setPosition(vector3df(2500,-20, 2700));

	IAnimatedMesh *OldHouseMesh = scenemanager->getMesh("Media/OldHouse/OldHouse.3DS");
	IAnimatedMeshSceneNode *OldHouseNode = scenemanager->addAnimatedMeshSceneNode(OldHouseMesh);
	OldHouseNode->setScale(vector3df(3.0f,3.0f, 3.0f));
	OldHouseNode->setMaterialFlag(EMF_LIGHTING, false);
	OldHouseNode->setPosition(vector3df(-5500,1570, 2000));
	OldHouseNode->setRotation(vector3df(0, -20, 0));

	IAnimatedMesh *DestroyedCarMesh = scenemanager->getMesh("Media/BrokenCar/Car.3DS");
	IAnimatedMeshSceneNode *DestroyedCarNode = scenemanager->addAnimatedMeshSceneNode(DestroyedCarMesh);
	DestroyedCarNode->setScale(vector3df(1500.0f, 1500.0f, 1500.0f));
	DestroyedCarNode->setMaterialFlag(EMF_LIGHTING, false);
	DestroyedCarNode->setPosition(vector3df(-4500, 250, 750));
	DestroyedCarNode->setRotation(vector3df(0, 0, 0));

	IAnimatedMesh *TireStackMesh = scenemanager->getMesh("Media/TireStack/Tires.3DS");
	IAnimatedMeshSceneNode *TireStackNode = scenemanager->addAnimatedMeshSceneNode(TireStackMesh);
	TireStackNode->setScale(vector3df(3.0f, 3.0f, 3.0f));
	TireStackNode->setMaterialFlag(EMF_LIGHTING, false);
	TireStackNode->setPosition(vector3df(-1500, -20, 2900));
	IAnimatedMesh *TireStackMesh2 = scenemanager->getMesh("Media/TireStack/Tires.3DS");
	IAnimatedMeshSceneNode *TireStackNode2 = scenemanager->addAnimatedMeshSceneNode(TireStackMesh2);
	TireStackNode2->setScale(vector3df(3.0f, 3.0f, 3.0f));
	TireStackNode2->setMaterialFlag(EMF_LIGHTING, false);
	TireStackNode2->setPosition(vector3df(-1650, -20, 2400));
	IAnimatedMesh *TireStackMesh3 = scenemanager->getMesh("Media/TireStack/Tires.3DS");
	IAnimatedMeshSceneNode *TireStackNode3 = scenemanager->addAnimatedMeshSceneNode(TireStackMesh3);
	TireStackNode3->setScale(vector3df(3.0f, 3.0f, 3.0f));
	TireStackNode3->setMaterialFlag(EMF_LIGHTING, false);
	TireStackNode3->setPosition(vector3df(-1300, -20, 2500));

	IAnimatedMesh *BusMesh = scenemanager->getMesh("Media/Vehicles/Bus.3DS");
	IAnimatedMeshSceneNode *BusNode = scenemanager->addAnimatedMeshSceneNode(BusMesh);
	BusNode->setScale(vector3df(35.0f, 35.0f,35.0f));
	BusNode->setMaterialFlag(EMF_LIGHTING, false);
	BusNode->setPosition(vector3df(-9000, -50, -1500));
	BusNode->setRotation(vector3df(0, 90, 0));

	IAnimatedMesh *OilTruckMesh = scenemanager->getMesh("Media/Vehicles/OilTruck.3DS");
	IAnimatedMeshSceneNode *OilTruckNode = scenemanager->addAnimatedMeshSceneNode(OilTruckMesh);
	OilTruckNode->setScale(vector3df(35.0f, 35.0f, 35.0f));
	OilTruckNode->setMaterialFlag(EMF_LIGHTING, false);
	OilTruckNode->setPosition(vector3df(-2750, -50, -7400));
	OilTruckNode->setRotation(vector3df(0, 225, 0));

	IAnimatedMesh *NormalTruckMesh = scenemanager->getMesh("Media/Vehicles/NormalTruck.3DS");
	IAnimatedMeshSceneNode *NormalTruckNode = scenemanager->addAnimatedMeshSceneNode(NormalTruckMesh);
	NormalTruckNode->setScale(vector3df(35.0f, 35.0f, 35.0f));
	NormalTruckNode->setMaterialFlag(EMF_LIGHTING, false);
	NormalTruckNode->setPosition(vector3df(-2000, -50, -5800));
	NormalTruckNode->setRotation(vector3df(0, 180, 0));

	IAnimatedMesh *FarmhouseMesh = scenemanager->getMesh("Media/Farmhouse/Farmhouse.3DS");
	IAnimatedMeshSceneNode *FarmhouseNode = scenemanager->addAnimatedMeshSceneNode(FarmhouseMesh);
	FarmhouseNode->setScale(vector3df(225.0f, 225.0f,225.0f));
	FarmhouseNode->setMaterialFlag(EMF_LIGHTING, false);
	FarmhouseNode->setPosition(vector3df(-3000, -50, -9000));
	FarmhouseNode->setRotation(vector3df(0, -60, 0));

	IAnimatedMesh *LargeOldHouseMesh = scenemanager->getMesh("Media/LargeOldHouse/LargeOldHouse.3DS");
	IAnimatedMeshSceneNode *LargeOldHouseNode = scenemanager->addAnimatedMeshSceneNode(LargeOldHouseMesh);
	LargeOldHouseNode->setScale(vector3df(7.0f, 7.0f, 7.0f));
	LargeOldHouseNode->setMaterialFlag(EMF_LIGHTING, false);
	LargeOldHouseNode->setPosition(vector3df(-9000, -20, -3500));
	LargeOldHouseNode->setRotation(vector3df(0, 250, 0));

	IAnimatedMesh *ShackMesh = scenemanager->getMesh("Media/Shack/Shack.3DS");
	IAnimatedMeshSceneNode *ShackNode = scenemanager->addAnimatedMeshSceneNode(ShackMesh);
	ShackNode->setScale(vector3df(4.0f, 4.0f, 4.0f));
	ShackNode->setMaterialFlag(EMF_LIGHTING, false);
	ShackNode->setPosition(vector3df(-9000, -20, -8250));
	ShackNode->setRotation(vector3df(0, 0, 0));

	IAnimatedMesh *ConcreteRuinsMesh = scenemanager->getMesh("Media/ConcreteRuins/ConcreteRuins.3DS");
	IAnimatedMeshSceneNode *ConcreteRuinsNode = scenemanager->addAnimatedMeshSceneNode(ConcreteRuinsMesh);
	ConcreteRuinsNode->setScale(vector3df(23.0f, 23.0f,23.0f));
	ConcreteRuinsNode->setMaterialFlag(EMF_LIGHTING, false);
	ConcreteRuinsNode->setPosition(vector3df(800, -20, -7000));
	ConcreteRuinsNode->setRotation(vector3df(0, 225, 0));

	/*IAnimatedMesh *RoadBlockerMesh = scenemanager->getMesh("Media/RoadBlocker/RoadBlocker.3DS");
	IAnimatedMeshSceneNode *RoadBlockerNode = scenemanager->addAnimatedMeshSceneNode(RoadBlockerMesh);
	RoadBlockerNode->setScale(vector3df(1.0f, 1.0f, 1.0f));
	RoadBlockerNode->setMaterialFlag(EMF_LIGHTING, false);
	RoadBlockerNode->setPosition(vector3df(0, -20, 0));
	RoadBlockerNode->setRotation(vector3df(0, 0, 0));*/

	/*IAnimatedMesh *SmallWoodenHouseMesh = scenemanager->getMesh("Media/SmallWoodenHouse/SmallWoodenHouse.3DS");
	IAnimatedMeshSceneNode *SmallWoodenHouseNode = scenemanager->addAnimatedMeshSceneNode(SmallWoodenHouseMesh);
	SmallWoodenHouseNode->setScale(vector3df(1.0f, 1.0f, 1.0f));
	SmallWoodenHouseNode->setMaterialFlag(EMF_LIGHTING, false);
	SmallWoodenHouseNode->setPosition(vector3df(0, -20, 0));
	SmallWoodenHouseNode->setRotation(vector3df(0, 0, 0));*/

	/*IAnimatedMesh *BusDepotMesh = scenemanager->getMesh("Media/BusDepot/BusDepot.3DS");
	IAnimatedMeshSceneNode *BusDepotNode = scenemanager->addAnimatedMeshSceneNode(BusDepotMesh);
	BusDepotNode->setScale(vector3df(1.0f, 1.0f, 1.0f));
	BusDepotNode->setMaterialFlag(EMF_LIGHTING, false);
	BusDepotNode->setPosition(vector3df(0, -20, 0));
	BusDepotNode->setRotation(vector3df(0, 0, 0));*/


	vector3df cubePosition = cube->getPosition();
	
	if (ker.IsKeyDown(KEY_KEY_W))
	{
		cubePosition.Z += MOVE_SPEED * (elapsed / 1000.0f);
	}

	cube->setPosition(cubePosition);


	IMeshSceneNode *Middle = scenemanager->addCubeSceneNode(500);
	Middle->setScale(vector3df(12.0, 0.001, 12.0));
	Middle->setPosition(vector3df(0, -20, 0));
	Middle->setMaterialFlag(EMF_LIGHTING, false);
	Middle->setMaterialTexture(0, vdriver->getTexture("Media/seamlessconcrete.jpg"));
	IMeshSceneNode *xBackward = scenemanager->addCubeSceneNode(500);
	xBackward->setScale(vector3df(12.0, 0.001, 12.0));
	xBackward->setPosition(vector3df(6000, -20, 0));
	xBackward->setMaterialFlag(EMF_LIGHTING, false);
	xBackward->setMaterialTexture(0, vdriver->getTexture("Media/seamlessconcrete.jpg"));
	IMeshSceneNode *zRight = scenemanager->addCubeSceneNode(500);
	zRight->setScale(vector3df(12.0, 0.001, 12.0));
	zRight->setPosition(vector3df(0, -20,6000));
	zRight->setMaterialFlag(EMF_LIGHTING, false);
	zRight->setMaterialTexture(0, vdriver->getTexture("Media/seamlessconcrete.jpg"));
	IMeshSceneNode *zLeft = scenemanager->addCubeSceneNode(500);
	zLeft->setScale(vector3df(12.0, 0.001, 12.0));
	zLeft->setPosition(vector3df(0, -20, -6000));
	zLeft->setMaterialFlag(EMF_LIGHTING, false);
	zLeft->setMaterialTexture(0, vdriver->getTexture("Media/seamlessconcrete.jpg"));
	IMeshSceneNode *ForwardLeft = scenemanager->addCubeSceneNode(500);
	ForwardLeft->setScale(vector3df(12.0, 0.001, 12.0));
	ForwardLeft->setPosition(vector3df(-6000, -20, -6000));
	ForwardLeft->setMaterialFlag(EMF_LIGHTING, false);
	ForwardLeft->setMaterialTexture(0, vdriver->getTexture("Media/seamlessconcrete.jpg"));
	IMeshSceneNode *xForward = scenemanager->addCubeSceneNode(500);
	xForward->setScale(vector3df(12.0, 0.001, 12.0));
	xForward->setPosition(vector3df(-6000, -20, 0));
	xForward->setMaterialFlag(EMF_LIGHTING, false);
	xForward->setMaterialTexture(0, vdriver->getTexture("Media/seamlessconcrete.jpg"));
	IMeshSceneNode *ForwardLeftLeft = scenemanager->addCubeSceneNode(500);
	ForwardLeftLeft->setScale(vector3df(12.0, 0.001, 12.0));
	ForwardLeftLeft->setPosition(vector3df(-6000, -20, -12000));
	ForwardLeftLeft->setMaterialFlag(EMF_LIGHTING, false);
	ForwardLeftLeft->setMaterialTexture(0, vdriver->getTexture("Media/seamlessconcrete.jpg"));
	IMeshSceneNode *zLeftX2 = scenemanager->addCubeSceneNode(500);
	zLeftX2->setScale(vector3df(12.0, 0.001, 12.0));
	zLeftX2->setPosition(vector3df(0, -20, -12000));
	zLeftX2->setMaterialFlag(EMF_LIGHTING, false);
	zLeftX2->setMaterialTexture(0, vdriver->getTexture("Media/seamlessconcrete.jpg"));
	IMeshSceneNode *BackwardsLeft = scenemanager->addCubeSceneNode(500);
	BackwardsLeft->setScale(vector3df(12.0, 0.001, 12.0));
	BackwardsLeft->setPosition(vector3df(6000, -20, -6000));
	BackwardsLeft->setMaterialFlag(EMF_LIGHTING, false);
	BackwardsLeft->setMaterialTexture(0, vdriver->getTexture("Media/seamlessconcrete.jpg"));
	IMeshSceneNode *BackwardsLeftLeft = scenemanager->addCubeSceneNode(500);
	BackwardsLeftLeft->setScale(vector3df(12.0, 0.001, 12.0));
	BackwardsLeftLeft->setPosition(vector3df(6000, -20, -12000));
	BackwardsLeftLeft->setMaterialFlag(EMF_LIGHTING, false);
	BackwardsLeftLeft->setMaterialTexture(0, vdriver->getTexture("Media/seamlessconcrete.jpg"));
	IMeshSceneNode *BackwardsRight = scenemanager->addCubeSceneNode(500);
	BackwardsRight->setScale(vector3df(12.0, 0.001, 12.0));
	BackwardsRight->setPosition(vector3df(6000, -20, 6000));
	BackwardsRight->setMaterialFlag(EMF_LIGHTING, false);
	BackwardsRight->setMaterialTexture(0, vdriver->getTexture("Media/seamlessconcrete.jpg"));
	IMeshSceneNode *ForwardRight = scenemanager->addCubeSceneNode(500);
	ForwardRight->setScale(vector3df(12.0, 0.001, 12.0));
	ForwardRight->setPosition(vector3df(-6000, -20, 6000));
	ForwardRight->setMaterialFlag(EMF_LIGHTING, false);
	ForwardRight->setMaterialTexture(0, vdriver->getTexture("Media/seamlessconcrete.jpg"));

	SKeyMap keyMap[8];
	keyMap[0].Action = EKA_MOVE_FORWARD;
	keyMap[0].KeyCode = KEY_UP;
	keyMap[1].Action = EKA_MOVE_FORWARD;
	keyMap[1].KeyCode = KEY_KEY_W;

	keyMap[2].Action = EKA_MOVE_BACKWARD;
	keyMap[2].KeyCode = KEY_DOWN;
	keyMap[3].Action = EKA_MOVE_BACKWARD;
	keyMap[3].KeyCode = KEY_KEY_S;

	keyMap[4].Action = EKA_STRAFE_LEFT;
	keyMap[4].KeyCode = KEY_LEFT;
	keyMap[5].Action = EKA_STRAFE_LEFT;
	keyMap[5].KeyCode = KEY_KEY_A;

	keyMap[6].Action = EKA_STRAFE_RIGHT;
	keyMap[6].KeyCode = KEY_RIGHT;
	keyMap[7].Action = EKA_STRAFE_RIGHT;
	keyMap[7].KeyCode = KEY_KEY_D;

	scenemanager->addSkyDomeSceneNode(vdriver->getTexture("Media/SkyDome.jpg"), 26, 26, 1.0f, 2.0f,500.0f);
	ICameraSceneNode *camera = scenemanager->addCameraSceneNodeFPS(0, 60, 1.5f, -1, keyMap, 8);
	camera->setFarValue(1000000.0f);

	scene::IMetaTriangleSelector* worldSel = scenemanager->createMetaTriangleSelector();

	scene::ITriangleSelector* sel1 = scenemanager->createTriangleSelectorFromBoundingBox(RundownBuildingNode);
	worldSel->addTriangleSelector(sel1);
	sel1->drop();
	scene::ITriangleSelector* sel2 = scenemanager->createTriangleSelectorFromBoundingBox(FactoryNode);
	worldSel->addTriangleSelector(sel2);
	sel2->drop();
	scene::ITriangleSelector* sel3 = scenemanager->createTriangleSelectorFromBoundingBox(OldShopNode);
	worldSel->addTriangleSelector(sel3);
	sel3->drop();
	scene::ITriangleSelector* sel4 = scenemanager->createTriangleSelectorFromBoundingBox(CottageNode);
	worldSel->addTriangleSelector(sel4);
	sel4->drop();
	scene::ITriangleSelector* sel5 = scenemanager->createTriangleSelectorFromBoundingBox(RuinsNode);
	worldSel->addTriangleSelector(sel5);
	sel5->drop();
	scene::ITriangleSelector* sel6 = scenemanager->createTriangleSelectorFromBoundingBox(BunkerNode);
	worldSel->addTriangleSelector(sel6);
	sel6->drop();
	scene::ITriangleSelector* sel7 = scenemanager->createTriangleSelectorFromBoundingBox(DebrisNode);
	worldSel->addTriangleSelector(sel7);
	sel7->drop();
	scene::ITriangleSelector* sel8 = scenemanager->createTriangleSelectorFromBoundingBox(OldHouseNode);
	worldSel->addTriangleSelector(sel8);
	sel8->drop();
	scene::ITriangleSelector* sel9 = scenemanager->createTriangleSelectorFromBoundingBox(DestroyedCarNode);
	worldSel->addTriangleSelector(sel9);
	sel9->drop();
	scene::ITriangleSelector* sel10 = scenemanager->createTriangleSelectorFromBoundingBox(TireStackNode);
	worldSel->addTriangleSelector(sel10);
	sel10->drop();
	scene::ITriangleSelector* sel11 = scenemanager->createTriangleSelectorFromBoundingBox(BusNode);
	worldSel->addTriangleSelector(sel11);
	sel11->drop();
	scene::ITriangleSelector* sel12 = scenemanager->createTriangleSelectorFromBoundingBox(OilTruckNode);
	worldSel->addTriangleSelector(sel12);
	sel12->drop();
	scene::ITriangleSelector* sel13 = scenemanager->createTriangleSelectorFromBoundingBox(NormalTruckNode);
	worldSel->addTriangleSelector(sel13);
	sel13->drop();
	scene::ITriangleSelector* sel14 = scenemanager->createTriangleSelectorFromBoundingBox(FarmhouseNode);
	worldSel->addTriangleSelector(sel14);
	sel14->drop();
	scene::ITriangleSelector* sel15 = scenemanager->createTriangleSelectorFromBoundingBox(LargeOldHouseNode);
	worldSel->addTriangleSelector(sel15);
	sel15->drop();
	scene::ITriangleSelector* sel16 = scenemanager->createTriangleSelectorFromBoundingBox(ShackNode);
	worldSel->addTriangleSelector(sel16);
	sel16->drop();
	scene::ITriangleSelector* sel17 = scenemanager->createTriangleSelectorFromBoundingBox(ConcreteRuinsNode);
	worldSel->addTriangleSelector(sel17);
	sel17->drop();

	scene::ISceneNodeAnimator* collision = scenemanager->createCollisionResponseAnimator(worldSel, camera, core::vector3df(6, 6, 6), core::vector3df(0, 0, 0));

	camera->addAnimator(collision);
	collision->drop();

	//Set up the game/drawing loop
	while (device->run())
	{
		//begin the scene
		vdriver->beginScene(true, true, SColor(255, 128, 0, 32));

		//draw the output to the screen using the scene manager
		scenemanager->drawAll();

		//end the scene
		vdriver->endScene();
	}
}