/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:23 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol VKCameraDelegate;
#import <VectorKit/VectorKit-Structs.h>
@class VKViewVolume, VKFootprint;

@interface VKCamera : NSObject {

	id<VKCameraDelegate> _delegate;
	VKPoint _position;
	SCD_Struct_VK6 _orientation;
	float _aspectRatio;
	float _verticalFieldOfView;
	VKPoint _puckPosition;
	SCD_Struct_VK7 _frustum;
	double _minHeight;
	double _maxHeight;
	double _maxPitch;
	double _terrainHeight;
	double _maxFarClipDistance;
	BOOL _needsUpdate;
	BOOL _updating;
	int _updateNumber;
	SCD_Struct_VK6 _viewProjectionMatrix;
	SCD_Struct_VK6 _projectionMatrix;
	SCD_Struct_VK6 _viewMatrix;
	SCD_Struct_VK6 _viewMatrixUnscaled;
	SCD_Struct_VK6 _projectionMatrixUnscaled;
	SCD_Struct_VK6 _projectionMatrixUnscaledWithoutOffset;
	SCD_Struct_VK6 _viewProjectionMatrixUnscaled;
	SCD_Struct_VK6 _worldMatrix;
	VKViewVolume* _viewVolume;
	VKFootprint* _footprint;
	double _tanHalfHorizFOV;
	double _tanHalfVerticalFOV;
	Matrix<double, 3, 1> _forward;
	Matrix<double, 3, 1> _right;
	Matrix<double, 3, 1> _up;
	double _fractionOfScreenAboveFarClipPlaneAtCanonicalPitch;
	double _distanceToGroundAndFarClipPlaneIntersection;
	double _screenHeightOfGroundAndFarClipPlaneIntersection;
	BOOL _allowDatelineWraparound;
	double _canonicalPitch;
	double _horizontalOffset;
	Matrix<double, 3, 1> _gmPosition;
	Matrix<double, 4, 4> _gmViewMatrix;
	Matrix<double, 4, 4> _gmProjectionMatrix;
	Matrix<double, 4, 4> _gmViewProjectionMatrix;
	Matrix<double, 4, 4> _gmWorldMatrix;
	double _maxHeightNoPitch;

}

@property (nonatomic,readonly) const Matrix<double* gmPosition; 
@property (nonatomic,readonly) const Matrix<double* gmViewProjectionMatrix; 
@property (nonatomic,readonly) const Matrix<double* gmProjectionMatrix; 
@property (nonatomic,readonly) const Matrix<double* gmViewMatrix; 
@property (nonatomic,readonly) Matrix<double gmUpVector; 
@property (nonatomic,readonly) Matrix<double gmRightVector; 
@property (nonatomic,readonly) Matrix<double gmForwardVector; 
@property (nonatomic,readonly) SCD_Struct_VK7 frustum;                                                   //@synthesize frustum=_frustum - In the implementation block
@property (assign,nonatomic) VKPoint position;                                                           //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) VKPoint puckPosition;                                                       //@synthesize puckPosition=_puckPosition - In the implementation block
@property (assign,nonatomic) const SCD_Struct_VK6* orientation; 
@property (assign,nonatomic) float aspectRatio;                                                          //@synthesize aspectRatio=_aspectRatio - In the implementation block
@property (nonatomic,readonly) float horizontalFieldOfView; 
@property (assign,nonatomic) float verticalFieldOfView; 
@property (nonatomic,readonly) double farClipDistance; 
@property (nonatomic,readonly) double nearClipDistance; 
@property (assign,nonatomic) VKCameraState cameraState; 
@property (nonatomic,readonly) int updateNumber;                                                         //@synthesize updateNumber=_updateNumber - In the implementation block
@property (assign,nonatomic) double minHeight;                                                           //@synthesize minHeight=_minHeight - In the implementation block
@property (assign,nonatomic) double maxHeight;                                                           //@synthesize maxHeight=_maxHeight - In the implementation block
@property (assign,nonatomic) double maxHeightNoPitch;                                                    //@synthesize maxHeightNoPitch=_maxHeightNoPitch - In the implementation block
@property (assign,nonatomic) double maxPitch;                                                            //@synthesize maxPitch=_maxPitch - In the implementation block
@property (assign,nonatomic) double terrainHeight;                                                       //@synthesize terrainHeight=_terrainHeight - In the implementation block
@property (nonatomic,readonly) const SCD_Struct_VK6* viewProjectionMatrix; 
@property (nonatomic,readonly) const SCD_Struct_VK6* projectionMatrix; 
@property (nonatomic,readonly) const SCD_Struct_VK6* viewMatrix; 
@property (nonatomic,readonly) const SCD_Struct_VK6* viewProjectionMatrixUnscaled; 
@property (nonatomic,readonly) const SCD_Struct_VK6* projectionMatrixUnscaled; 
@property (nonatomic,readonly) const SCD_Struct_VK6* projectionMatrixUnscaledWithoutOffset; 
@property (nonatomic,readonly) const SCD_Struct_VK6* viewMatrixUnscaled; 
@property (nonatomic,readonly) const SCD_Struct_VK6* worldMatrix; 
@property (nonatomic,readonly) VKViewVolume * viewVolume; 
@property (nonatomic,readonly) VKFootprint * footprint; 
@property (nonatomic,readonly) Matrix<double upVector; 
@property (nonatomic,readonly) Matrix<double rightVector; 
@property (nonatomic,readonly) Matrix<double forwardVector; 
@property (nonatomic,readonly) VKPoint groundPoint; 
@property (nonatomic,readonly) double pitch; 
@property (nonatomic,readonly) double yaw; 
@property (nonatomic,readonly) double tanHalfHorizFOV; 
@property (nonatomic,readonly) double tanHalfVerticalFOV; 
@property (nonatomic,readonly) double distanceToGroundAndFarClipPlaneIntersection;                       //@synthesize distanceToGroundAndFarClipPlaneIntersection=_distanceToGroundAndFarClipPlaneIntersection - In the implementation block
@property (nonatomic,readonly) double screenHeightOfGroundAndFarClipPlaneIntersection;                   //@synthesize screenHeightOfGroundAndFarClipPlaneIntersection=_screenHeightOfGroundAndFarClipPlaneIntersection - In the implementation block
@property (assign,nonatomic) id<VKCameraDelegate> delegate;                                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double fractionOfScreenAboveFarClipPlaneAtCanonicalPitch;                   //@synthesize fractionOfScreenAboveFarClipPlaneAtCanonicalPitch=_fractionOfScreenAboveFarClipPlaneAtCanonicalPitch - In the implementation block
@property (assign,nonatomic) BOOL allowDatelineWraparound;                                               //@synthesize allowDatelineWraparound=_allowDatelineWraparound - In the implementation block
@property (assign,nonatomic) double canonicalPitch;                                                      //@synthesize canonicalPitch=_canonicalPitch - In the implementation block
@property (assign,nonatomic) double horizontalOffset;                                                    //@synthesize horizontalOffset=_horizontalOffset - In the implementation block
-(Matrix<double, 3, 1>)gmGroundPointFromScreenPoint:(CGPoint)arg1 atGroundLevel:(double)arg2 ;
-(const Matrix<double*)gmPosition;
-(const Matrix<double*)gmViewProjectionMatrix;
-(const Matrix<double*)gmProjectionMatrix;
-(const Matrix<double*)gmViewMatrix;
-(Matrix<double)gmUpVector;
-(Matrix<double)gmRightVector;
-(Matrix<double)gmForwardVector;
-(Matrix<double, 3, 1>)gmGroundPointFromScreenPoint:(CGPoint)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<VKCameraDelegate>)arg1 ;
-(id)init;
-(id)description;
-(id<VKCameraDelegate>)delegate;
-(const SCD_Struct_VK6*)orientation;
-(void)setPosition:(VKPoint)arg1 ;
-(VKPoint)position;
-(void)setOrientation:(const SCD_Struct_VK6*)arg1 ;
-(void)setNeedsUpdate;
-(void)updateIfNeeded;
-(double)widthOfViewAtDepth:(double)arg1 ;
-(VKCameraState)cameraState;
-(BOOL)isWorldSpaceRectVisible:(const SCD_Struct_VK10*)arg1 ;
-(Matrix<double)forwardVector;
-(/*^block*/id)annotationRectTest;
-(/*^block*/id)annotationCoordinateTest;
-(void)adjustClipPlanes;
-(float)verticalFieldOfView;
-(double)farClipDistance;
-(double)pitch;
-(Matrix<double)rightVector;
-(VKPoint)groundPointFromScreenPoint:(CGPoint)arg1 atGroundLevel:(double)arg2 ;
-(double)tanHalfHorizFOV;
-(void)setHorizontalOffset:(double)arg1 ;
-(void)logCameraState;
-(void)_setPosition:(VKPoint)arg1 ;
-(void)setAspectRatio:(float)arg1 ;
-(void)setVerticalFieldOfView:(float)arg1 ;
-(float)horizontalFieldOfView;
-(double)nearClipDistance;
-(double)tanHalfVerticalFOV;
-(const SCD_Struct_VK6*)viewProjectionMatrix;
-(const SCD_Struct_VK6*)projectionMatrix;
-(const SCD_Struct_VK6*)viewMatrix;
-(const SCD_Struct_VK6*)viewMatrixUnscaled;
-(const SCD_Struct_VK6*)viewProjectionMatrixUnscaled;
-(const SCD_Struct_VK6*)projectionMatrixUnscaledWithoutOffset;
-(const SCD_Struct_VK6*)projectionMatrixUnscaled;
-(const SCD_Struct_VK6*)worldMatrix;
-(VKViewVolume *)viewVolume;
-(VKFootprint *)footprint;
-(Matrix<double)upVector;
-(VKPoint)groundPoint;
-(double)displayZoomLevel;
-(double)yaw;
-(void)setCameraState:(VKCameraState)arg1 ;
-(BOOL)hasChangedState:(VKCameraState*)arg1 ;
-(float)maximumStyleZForRect:(const SCD_Struct_VK10*)arg1 ;
-(BOOL)isOuterWorldBoundsVisible;
-(VKPoint)groundPlaneIntersectionPoint;
-(VKPoint)groundPointFromScreenPoint:(CGPoint)arg1 ;
-(double)depthForViewWidth:(double)arg1 ;
-(SCD_Struct_VK7)frustum;
-(float)aspectRatio;
-(double)maxHeightNoPitch;
-(void)setMaxHeightNoPitch:(double)arg1 ;
-(double)minHeight;
-(void)setMinHeight:(double)arg1 ;
-(double)maxHeight;
-(void)setMaxHeight:(double)arg1 ;
-(double)maxPitch;
-(void)setMaxPitch:(double)arg1 ;
-(double)terrainHeight;
-(void)setTerrainHeight:(double)arg1 ;
-(int)updateNumber;
-(double)fractionOfScreenAboveFarClipPlaneAtCanonicalPitch;
-(void)setFractionOfScreenAboveFarClipPlaneAtCanonicalPitch:(double)arg1 ;
-(double)distanceToGroundAndFarClipPlaneIntersection;
-(double)screenHeightOfGroundAndFarClipPlaneIntersection;
-(BOOL)allowDatelineWraparound;
-(void)setAllowDatelineWraparound:(BOOL)arg1 ;
-(double)canonicalPitch;
-(void)setCanonicalPitch:(double)arg1 ;
-(double)horizontalOffset;
-(VKPoint)puckPosition;
-(void)setPuckPosition:(VKPoint)arg1 ;
@end
