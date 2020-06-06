/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NLPLearner.framework/NLPLearner
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/MLBackgroundTask.h>

@class NSURL;

@interface QuickTypePFLBackgroundTask : MLBackgroundTask {

	NSURL* _url;

}

@property (nonatomic,copy) NSURL * url;              //@synthesize url=_url - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)taskRunnerClass;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(id)activityForScheduling;
@end

