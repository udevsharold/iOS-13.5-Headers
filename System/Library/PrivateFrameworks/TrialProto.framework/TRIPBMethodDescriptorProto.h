/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrialProto/TRIPBMessage.h>

@class NSString, TRIPBMethodOptions;

@interface TRIPBMethodDescriptorProto : TRIPBMessage

@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) BOOL hasName; 
@property (nonatomic,copy) NSString * inputType; 
@property (assign,nonatomic) BOOL hasInputType; 
@property (nonatomic,copy) NSString * outputType; 
@property (assign,nonatomic) BOOL hasOutputType; 
@property (nonatomic,retain) TRIPBMethodOptions * options; 
@property (assign,nonatomic) BOOL hasOptions; 
@property (assign,nonatomic) BOOL clientStreaming; 
@property (assign,nonatomic) BOOL hasClientStreaming; 
@property (assign,nonatomic) BOOL serverStreaming; 
@property (assign,nonatomic) BOOL hasServerStreaming; 
+(id)descriptor;
@end

