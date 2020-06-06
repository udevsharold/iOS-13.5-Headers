/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSDictionary, NSSet;

@interface gbtClassifierOutput : NSObject <MLFeatureProvider> {

	long long _wait_to_charge;
	NSDictionary* _classProbability;

}

@property (assign,nonatomic) long long wait_to_charge;                     //@synthesize wait_to_charge=_wait_to_charge - In the implementation block
@property (nonatomic,retain) NSDictionary * classProbability;              //@synthesize classProbability=_classProbability - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(NSDictionary *)classProbability;
-(id)initWithWait_to_charge:(long long)arg1 classProbability:(id)arg2 ;
-(void)setClassProbability:(NSDictionary *)arg1 ;
-(long long)wait_to_charge;
-(void)setWait_to_charge:(long long)arg1 ;
@end

