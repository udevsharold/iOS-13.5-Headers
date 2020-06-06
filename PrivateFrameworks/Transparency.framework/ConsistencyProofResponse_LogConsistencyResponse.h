/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Transparency/GPBMessage.h>
#import <Transparency/TransparencyVerifiable.h>

@class TransparencyConsistencyProofVerifier, TransparencyManagedDataStore, NSNumber, SignedLogHead, NSMutableArray;

@interface ConsistencyProofResponse_LogConsistencyResponse : GPBMessage <TransparencyVerifiable>

@property (retain) TransparencyConsistencyProofVerifier * verifier; 
@property (retain) TransparencyManagedDataStore * dataStore; 
@property (retain) NSNumber * startRevision; 
@property (assign,nonatomic) int logType; 
@property (assign,nonatomic) int application; 
@property (nonatomic,retain) SignedLogHead * startSlh; 
@property (assign,nonatomic) BOOL hasStartSlh; 
@property (nonatomic,retain) SignedLogHead * endSlh; 
@property (assign,nonatomic) BOOL hasEndSlh; 
@property (nonatomic,retain) NSMutableArray * proofHashesArray; 
@property (nonatomic,readonly) unsigned long long proofHashesArray_Count; 
+(id)descriptor;
-(TransparencyManagedDataStore *)dataStore;
-(void)setDataStore:(TransparencyManagedDataStore *)arg1 ;
-(BOOL)verifyWithError:(id*)arg1 ;
-(TransparencyConsistencyProofVerifier *)verifier;
-(void)setVerifier:(TransparencyConsistencyProofVerifier *)arg1 ;
-(void)setResult:(BOOL)arg1 treeHead:(id)arg2 error:(id)arg3 ;
-(NSNumber *)startRevision;
-(void)setStartRevision:(NSNumber *)arg1 ;
@end

