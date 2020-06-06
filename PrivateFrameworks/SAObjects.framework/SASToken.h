/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSString;

@interface SASToken : AceObject <SAAceSerializable>

@property (assign,nonatomic) BOOL addSpaceAfter; 
@property (nonatomic,copy) NSNumber * confidenceScore; 
@property (nonatomic,copy) NSNumber * endTime; 
@property (nonatomic,copy) NSString * ipaPhoneSequence; 
@property (nonatomic,copy) NSString * originalText; 
@property (nonatomic,copy) NSString * phoneSequence; 
@property (nonatomic,copy) NSString * recognitionStability; 
@property (assign,nonatomic) BOOL removeSpaceAfter; 
@property (assign,nonatomic) BOOL removeSpaceBefore; 
@property (nonatomic,copy) NSNumber * silenceStartTime; 
@property (nonatomic,copy) NSNumber * startTime; 
@property (nonatomic,copy) NSString * text; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)token;
+(id)tokenWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)af_speechToken;
-(id)groupIdentifier;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSNumber *)startTime;
-(NSNumber *)endTime;
-(void)setEndTime:(NSNumber *)arg1 ;
-(void)setStartTime:(NSNumber *)arg1 ;
-(NSString *)originalText;
-(NSNumber *)confidenceScore;
-(void)setRemoveSpaceBefore:(BOOL)arg1 ;
-(BOOL)removeSpaceBefore;
-(BOOL)removeSpaceAfter;
-(void)setOriginalText:(NSString *)arg1 ;
-(void)setConfidenceScore:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(NSString *)phoneSequence;
-(void)setPhoneSequence:(NSString *)arg1 ;
-(NSNumber *)silenceStartTime;
-(void)setSilenceStartTime:(NSNumber *)arg1 ;
-(void)setRemoveSpaceAfter:(BOOL)arg1 ;
-(NSString *)ipaPhoneSequence;
-(void)setIpaPhoneSequence:(NSString *)arg1 ;
-(BOOL)addSpaceAfter;
-(void)setAddSpaceAfter:(BOOL)arg1 ;
-(NSString *)recognitionStability;
-(void)setRecognitionStability:(NSString *)arg1 ;
@end

