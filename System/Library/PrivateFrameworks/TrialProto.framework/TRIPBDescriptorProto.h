/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrialProto/TRIPBMessage.h>

@class NSString, NSMutableArray, TRIPBMessageOptions;

@interface TRIPBDescriptorProto : TRIPBMessage

@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) BOOL hasName; 
@property (nonatomic,retain) NSMutableArray * fieldArray; 
@property (nonatomic,readonly) unsigned long long fieldArray_Count; 
@property (nonatomic,retain) NSMutableArray * extensionArray; 
@property (nonatomic,readonly) unsigned long long extensionArray_Count; 
@property (nonatomic,retain) NSMutableArray * nestedTypeArray; 
@property (nonatomic,readonly) unsigned long long nestedTypeArray_Count; 
@property (nonatomic,retain) NSMutableArray * enumTypeArray; 
@property (nonatomic,readonly) unsigned long long enumTypeArray_Count; 
@property (nonatomic,retain) NSMutableArray * extensionRangeArray; 
@property (nonatomic,readonly) unsigned long long extensionRangeArray_Count; 
@property (nonatomic,retain) NSMutableArray * oneofDeclArray; 
@property (nonatomic,readonly) unsigned long long oneofDeclArray_Count; 
@property (nonatomic,retain) TRIPBMessageOptions * options; 
@property (assign,nonatomic) BOOL hasOptions; 
@property (nonatomic,retain) NSMutableArray * reservedRangeArray; 
@property (nonatomic,readonly) unsigned long long reservedRangeArray_Count; 
@property (nonatomic,retain) NSMutableArray * reservedNameArray; 
@property (nonatomic,readonly) unsigned long long reservedNameArray_Count; 
+(id)descriptor;
@end
