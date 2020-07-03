#pragma once

#define IndexDataType unsigned long
namespace Ads {
	enum IndexGroups : IndexDataType
	{
		GroupBasics = 0x01,
		GroupBasicsControl = 0x02,
		GroupJointRead = 0x03,
		GroupJointWrite = 0x04,
		GroupIO = 0x05,
		GroupPath = 0x06,
		GroupMoveMode = 0x07,
	};

	enum GroupBasicsOffset : IndexDataType
	{
		BasicsAuth = 0x01,
		BasicsName = 0x02,
		BasicsType = 0x03
	};

	enum GroupBasicsControlOffset : IndexDataType
	{
		ControlPower = 0x01,
		ControlReset = 0x02,
		ControlCalibration = 0x03
	};

	enum GroupJointReadOffsaet : IndexDataType
	{
		JointPosition = 0x01,
		JointAllPosition = 0x02,
		JointVelocity = 0x03,
		JointAllVelocity = 0x04,
		JointAcceleration = 0x05,
		JointAllAcceleration = 0x06,
		JointTorque = 0x07,
		JointAllTorque = 0x08
	};

	typedef GroupJointReadOffsaet GroupJointWriteOffsaet;

	enum GroupIOOffset : IndexDataType
	{
		IOEnable = 0x01,
		IODiusable = 0x02,
		IORead = 0x03,
		IOReadAll = 0x04,
		IOWrite = 0x05,
		IOWriteAll = 0x06
	};

	enum GroupPathOffset : IndexDataType
	{
		PathNumber = 0x01,
		PathReset = 0x02,
		PathStart = 0x03,
		PathSet = 0x04,
	};

	enum GroupMoveModeOffset : IndexDataType
	{
		ModeJoint = 0x01,
		ModeTerminal = 0x02,
		ModeFollow = 0x03
	};

	enum GroupRoboticsLibraryClasses : IndexDataType
	{
		// 为每个类预留0xfff个接口位置
		rlModel = 0x1000,
		rlMetric = 0x2000,
		rlKinematic = 0x3000,
		rlDynamic = 0x4000,

	};

	enum RlModelOffset : IndexDataType
	{
		areColliding = rlModel,
		generatePositionGaussian,
		generatePositionUniform,
		getAcceleration,
		getAccelerationUnits,
		getDof,
		getDofPosition,
		getFrame,
		getGammaPosition,
		getGammaVelocity,
		getGammaPositionInverse,
		getGammaVelocityInverse,
		getHomePosition,
		getJoints,
		getOperationalAcceleration,
		getOperationalDof,
		getOperationalForce,
		getOperationalPosition,
		getOperationalVelocity,
		getManufacturer, 
		getMaximum,
		getMinimum,
		getName,
		getPosition,
		getPositionUnits,
		getTorque,
		getTorqueUnits,
		getSpeed,
		getSpeedUnits,
		getVelocity,
		getVelocityUnits,
		isColliding,
		setAcceleration,
		setGammaPosition,
		setGammaVelocity,
		setHomePosition,
		setManufacturer,
		setName,
		setOperationalVelocity,
		setPosition,
		setTorque,
		setVelocity,
		tool,
		world,
		//为实现对tool/world的写操作额外添加
		setTool,
		setWorld,
	};

	enum RlMetricOffset : IndexDataType
	{
		clip = rlMetric,
		distance,
		interpolate,
		inverseOfTransformedDistance,
		isValid,
		maxDistanceToRectangle,
		minDistanceToRectangle,
		newDistance,
		normalize,
		step,
		transformedDistance,
	};

	enum RlKinematicOffset : IndexDataType
	{
		calculateInversePosition = rlKinematic,
		calculateJacobian,
		calculateJacobianDerivative,
		calculateJacobianInverse,
		calculateManipulabilityMeasure,
		forwardAcceleration,
		forwardPosition,
		forwardVelocity,
		getJacobian,
		getJacobianDerivative,
		getJacobianInverse,
		isSingular,
	};

	enum RlDynamicOffset : IndexDataType
	{
		calculateCentrifugalCoriolis = rlDynamic,
		calculateGravity,
		calculateMassMatrix,
		calculateMassMatrixInverse,
		calculateOperationalMassMatrixInverse,
		eulerCauchy,
		forwardDynamics,
		getCentrifugalCoriolis,
		getGravity,
		getMassMatrix,
		getMassMatrixInverse,
		getOperationalMassMatrixInverse,
		getWorldGravity,
		inverseDynamics,
		inverseForce,
		rungeKuttaNystrom,
		setWorldGravity,
	};
}