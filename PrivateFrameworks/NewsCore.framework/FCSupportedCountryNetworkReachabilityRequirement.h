/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCNetworkReachabilityRequirement.h>

@protocol FCNetworkReachabilityRequirementObserving;
@class NSString;

@interface FCSupportedCountryNetworkReachabilityRequirement : NSObject <FCNetworkReachabilityRequirement> {

	BOOL _satisfied;
	id<FCNetworkReachabilityRequirementObserving> observer;

}

@property (assign,getter=isSatisfied,nonatomic) BOOL satisfied;                                          //@synthesize satisfied=_satisfied - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long offlineReason; 
@property (assign,nonatomic,__weak) id<FCNetworkReachabilityRequirementObserving> observer; 
-(id)init;
-(id<FCNetworkReachabilityRequirementObserving>)observer;
-(void)_update;
-(void)setObserver:(id<FCNetworkReachabilityRequirementObserving>)arg1 ;
-(long long)offlineReason;
-(BOOL)isSatisfied;
-(void)setSatisfied:(BOOL)arg1 ;
@end

