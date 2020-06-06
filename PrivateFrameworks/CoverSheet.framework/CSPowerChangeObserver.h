/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject, CSPowerStatusProviding;
@interface CSPowerChangeObserver : NSObject {

	id<NSObject> _notificationToken;
	id<CSPowerStatusProviding> _statusProvider;
	BOOL _connectedToPower;
	/*^block*/id _block;

}

@property (nonatomic,copy) id block;                                                       //@synthesize block=_block - In the implementation block
@property (assign,getter=isConnectedToPower,nonatomic) BOOL connectedToPower;              //@synthesize connectedToPower=_connectedToPower - In the implementation block
-(void)dealloc;
-(id)block;
-(void)update;
-(void)setBlock:(id)arg1 ;
-(void)setIsConnectedToPower:(BOOL)arg1 ;
-(id)initWithStatusProvider:(id)arg1 notificationName:(id)arg2 updateBlock:(/*^block*/id)arg3 ;
-(BOOL)isConnectedToPower;
-(void)setConnectedToPower:(BOOL)arg1 ;
@end

