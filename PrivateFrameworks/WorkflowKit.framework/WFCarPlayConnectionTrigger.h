/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/WFTrigger.h>

@interface WFCarPlayConnectionTrigger : WFTrigger {

	BOOL _onConnect;
	BOOL _onDisconnect;

}

@property (assign,nonatomic) BOOL onConnect;                 //@synthesize onConnect=_onConnect - In the implementation block
@property (assign,nonatomic) BOOL onDisconnect;              //@synthesize onDisconnect=_onDisconnect - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)localizedDisplayName;
+(BOOL)isSupportedOnThisDevice;
+(BOOL)isAllowedToRunAutomatically;
+(id)localizedDisplayExplanation;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setOnConnect:(BOOL)arg1 ;
-(BOOL)onConnect;
-(BOOL)hasValidConfiguration;
-(id)localizedDescriptionWithConfigurationSummary;
-(id)localizedPastTenseDescription;
-(BOOL)onDisconnect;
-(void)setOnDisconnect:(BOOL)arg1 ;
@end

