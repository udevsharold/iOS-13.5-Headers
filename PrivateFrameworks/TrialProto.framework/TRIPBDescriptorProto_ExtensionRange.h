/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrialProto/TRIPBMessage.h>

@class TRIPBExtensionRangeOptions;

@interface TRIPBDescriptorProto_ExtensionRange : TRIPBMessage

@property (assign,nonatomic) int start; 
@property (assign,nonatomic) BOOL hasStart; 
@property (assign,nonatomic) int end; 
@property (assign,nonatomic) BOOL hasEnd; 
@property (nonatomic,retain) TRIPBExtensionRangeOptions * options; 
@property (assign,nonatomic) BOOL hasOptions; 
+(id)descriptor;
@end

