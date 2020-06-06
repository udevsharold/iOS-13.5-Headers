/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrialProto/TRIPBMessage.h>

@class NSString, TRIPBFieldOptions;

@interface TRIPBFieldDescriptorProto : TRIPBMessage

@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) BOOL hasName; 
@property (assign,nonatomic) int number; 
@property (assign,nonatomic) BOOL hasNumber; 
@property (assign,nonatomic) int label; 
@property (assign,nonatomic) BOOL hasLabel; 
@property (assign,nonatomic) int type; 
@property (assign,nonatomic) BOOL hasType; 
@property (nonatomic,copy) NSString * typeName; 
@property (assign,nonatomic) BOOL hasTypeName; 
@property (nonatomic,copy) NSString * extendee; 
@property (assign,nonatomic) BOOL hasExtendee; 
@property (nonatomic,copy) NSString * defaultValue; 
@property (assign,nonatomic) BOOL hasDefaultValue; 
@property (assign,nonatomic) int oneofIndex; 
@property (assign,nonatomic) BOOL hasOneofIndex; 
@property (nonatomic,copy) NSString * jsonName; 
@property (assign,nonatomic) BOOL hasJsonName; 
@property (nonatomic,retain) TRIPBFieldOptions * options; 
@property (assign,nonatomic) BOOL hasOptions; 
+(id)descriptor;
@end

