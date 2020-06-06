/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SRDaemonNotificationDelegate;
@class NSString;

@interface SRDaemonNotification : NSObject {

	int _registrationToken;
	int _significantTimeChangeToken;
	id<SRDaemonNotificationDelegate> _delegate;
	NSString* _sensorIdentifier;

}

@property (nonatomic,copy) NSString * sensorIdentifier;                                     //@synthesize sensorIdentifier=_sensorIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<SRDaemonNotificationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(void)initialize;
-(void)dealloc;
-(id<SRDaemonNotificationDelegate>)delegate;
-(void)setDelegate:(id<SRDaemonNotificationDelegate>)arg1 ;
-(void)registerForDaemonNotification;
-(void)unregisterForDaemonNotification;
-(NSString *)sensorIdentifier;
-(id)initWithSensor:(id)arg1 ;
-(void)setSensorIdentifier:(NSString *)arg1 ;
@end

