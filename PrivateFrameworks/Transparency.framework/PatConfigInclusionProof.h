/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Transparency/GPBMessage.h>
#import <Transparency/TransparencyVerifiable.h>

@class KTPatConfigInclusionProofVerifier, TransparencyManagedDataStore, LogEntry;

@interface PatConfigInclusionProof : GPBMessage <TransparencyVerifiable>

@property (retain) KTPatConfigInclusionProofVerifier * verifier; 
@property (retain) TransparencyManagedDataStore * dataStore; 
@property (readonly) unsigned long long patLogBeginningMs; 
@property (readonly) unsigned long long tltLogBeginningMs; 
@property (nonatomic,retain) LogEntry * perApplicationTreeEntry; 
@property (assign,nonatomic) BOOL hasPerApplicationTreeEntry; 
@property (nonatomic,retain) LogEntry * topLevelTreeEntry; 
@property (assign,nonatomic) BOOL hasTopLevelTreeEntry; 
+(id)descriptor;
-(TransparencyManagedDataStore *)dataStore;
-(void)setDataStore:(TransparencyManagedDataStore *)arg1 ;
-(BOOL)verifyWithError:(id*)arg1 ;
-(KTPatConfigInclusionProofVerifier *)verifier;
-(void)setVerifier:(KTPatConfigInclusionProofVerifier *)arg1 ;
-(id)vrfPublicKeyWithError:(id*)arg1 ;
-(unsigned long long)tltLogBeginningMs;
-(unsigned long long)patLogBeginningMs;
@end

