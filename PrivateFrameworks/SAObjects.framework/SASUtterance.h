/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SASUtterance : AceObject <SAAceSerializable>

@property (assign,nonatomic) double confidenceScore; 
@property (nonatomic,copy) NSArray * interpretationIndices; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)utterance;
+(id)utteranceWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(double)confidenceScore;
-(void)setConfidenceScore:(double)arg1 ;
-(id)encodedClassName;
-(NSArray *)interpretationIndices;
-(void)setInterpretationIndices:(NSArray *)arg1 ;
@end

