/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MRGameControllerAccelerationProtobuf;

@interface _MRGameControllerMotionProtobuf : PBCodable <NSCopying> {

	_MRGameControllerAccelerationProtobuf* _attitude;
	_MRGameControllerAccelerationProtobuf* _gravity;
	_MRGameControllerAccelerationProtobuf* _rotation;
	_MRGameControllerAccelerationProtobuf* _userAcceleration;

}

@property (nonatomic,readonly) BOOL hasGravity; 
@property (nonatomic,retain) _MRGameControllerAccelerationProtobuf * gravity;                       //@synthesize gravity=_gravity - In the implementation block
@property (nonatomic,readonly) BOOL hasUserAcceleration; 
@property (nonatomic,retain) _MRGameControllerAccelerationProtobuf * userAcceleration;              //@synthesize userAcceleration=_userAcceleration - In the implementation block
@property (nonatomic,readonly) BOOL hasAttitude; 
@property (nonatomic,retain) _MRGameControllerAccelerationProtobuf * attitude;                      //@synthesize attitude=_attitude - In the implementation block
@property (nonatomic,readonly) BOOL hasRotation; 
@property (nonatomic,retain) _MRGameControllerAccelerationProtobuf * rotation;                      //@synthesize rotation=_rotation - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(_MRGameControllerAccelerationProtobuf *)gravity;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(_MRGameControllerAccelerationProtobuf *)rotation;
-(void)setRotation:(_MRGameControllerAccelerationProtobuf *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setGravity:(_MRGameControllerAccelerationProtobuf *)arg1 ;
-(_MRGameControllerAccelerationProtobuf *)attitude;
-(_MRGameControllerAccelerationProtobuf *)userAcceleration;
-(void)setUserAcceleration:(_MRGameControllerAccelerationProtobuf *)arg1 ;
-(void)setAttitude:(_MRGameControllerAccelerationProtobuf *)arg1 ;
-(BOOL)hasGravity;
-(BOOL)hasUserAcceleration;
-(BOOL)hasAttitude;
-(BOOL)hasRotation;
@end

