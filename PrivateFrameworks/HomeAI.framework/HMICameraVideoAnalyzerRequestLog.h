/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:51:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMICameraVideoAnalyzerRequest, NSString;

@interface HMICameraVideoAnalyzerRequestLog : HMFObject <HMFLogging> {

	HMICameraVideoAnalyzerRequest* _request;

}

@property (__weak,readonly) HMICameraVideoAnalyzerRequest * request;              //@synthesize request=_request - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)stringWithFormat:(id)arg1 ;
-(HMICameraVideoAnalyzerRequest *)request;
-(id)initWithRequest:(id)arg1 ;
-(void)info:(id)arg1 ;
-(void)debug:(id)arg1 ;
@end

