/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PETLoggingOutlet.h>

@class NSString;

@interface PETAggdLoggingOutlet : NSObject <PETLoggingOutlet>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)logUnsignedIntegerValue:(unsigned long long)arg1 forEvent:(id)arg2 featureId:(id)arg3 stringifiedProperties:(id)arg4 metaData:(id)arg5 ;
-(void)setUnsignedIntegerValue:(unsigned long long)arg1 forEvent:(id)arg2 featureId:(id)arg3 stringifiedProperties:(id)arg4 metaData:(id)arg5 ;
-(void)logDoubleValue:(double)arg1 forEvent:(id)arg2 featureId:(id)arg3 stringifiedProperties:(id)arg4 metaData:(id)arg5 ;
-(void)logErrorForEvent:(id)arg1 featureId:(id)arg2 reason:(id)arg3 ;
@end

