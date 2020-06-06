/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSUUID;

@interface HMDBackingStoreUpdateObjectReference : NSOperation {

	id _object;
	NSUUID* _uuid;

}

@property (assign,nonatomic,__weak) id object;              //@synthesize object=_object - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                 //@synthesize uuid=_uuid - In the implementation block
-(id)object;
-(void)setObject:(id)arg1 ;
-(void)main;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(id)initWithObject:(id)arg1 uuid:(id)arg2 ;
@end

