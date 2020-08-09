/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
@class NSString;

@interface NLCRunner : NSObject {

	SCD_Struct_NL30 theCommand;
	SCD_Struct_NL31 session_cookie;
	BOOL simulationRunning;
	NSString* _interfaceName;

}

@property (nonatomic,retain) NSString * interfaceName;              //@synthesize interfaceName=_interfaceName - In the implementation block
+(id)sharedInstance;
-(id)init;
-(NSString *)interfaceName;
-(void)setInterfaceName:(NSString *)arg1 ;
-(void)engage;
-(void)disableDNS;
-(void)enableDNS;
-(void)setUplinkPacketLossRate:(float)arg1 ;
-(void)setDownlinkPacketLossRate:(float)arg1 ;
-(void)disengage;
-(void)modifySimulation;
@end
