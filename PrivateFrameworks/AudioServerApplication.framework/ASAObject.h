/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AudioServerApplication.framework/AudioServerApplication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface ASAObject : NSObject {

	unsigned _objectID;

}

@property (nonatomic,readonly) unsigned objectID;                          //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,readonly) unsigned baseClass; 
@property (nonatomic,readonly) unsigned objectClass; 
@property (nonatomic,readonly) unsigned ownerID; 
@property (nonatomic,copy,readonly) NSArray * ownedObjectIDs; 
-(id)init;
-(unsigned)objectID;
-(unsigned)objectClass;
-(unsigned)ownerID;
-(id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(BOOL)arg2 ;
-(unsigned)baseClass;
-(BOOL)getMasterGlobalProperty:(unsigned)arg1 withData:(void*)arg2 ofSize:(unsigned*)arg3 withQualifier:(void*)arg4 ofSize:(unsigned)arg5 ;
-(BOOL)setMasterOutputProperty:(unsigned)arg1 withData:(void*)arg2 ofSize:(unsigned)arg3 withQualifier:(void*)arg4 ofSize:(unsigned)arg5 ;
-(BOOL)setMasterInputProperty:(unsigned)arg1 withData:(void*)arg2 ofSize:(unsigned)arg3 withQualifier:(void*)arg4 ofSize:(unsigned)arg5 ;
-(id)initWithAudioObjectID:(unsigned)arg1 ;
-(BOOL)setMasterGlobalProperty:(unsigned)arg1 withData:(void*)arg2 ofSize:(unsigned)arg3 withQualifier:(void*)arg4 ofSize:(unsigned)arg5 ;
-(id)coreAudioClassName;
-(BOOL)getMasterInputProperty:(unsigned)arg1 withData:(void*)arg2 ofSize:(unsigned*)arg3 withQualifier:(void*)arg4 ofSize:(unsigned)arg5 ;
-(BOOL)getMasterOutputProperty:(unsigned)arg1 withData:(void*)arg2 ofSize:(unsigned*)arg3 withQualifier:(void*)arg4 ofSize:(unsigned)arg5 ;
-(unsigned)sizeOfMasterGlobalProperty:(unsigned)arg1 withQualifier:(void*)arg2 ofSize:(unsigned)arg3 ;
-(unsigned)sizeOfMasterInputProperty:(unsigned)arg1 withQualifier:(void*)arg2 ofSize:(unsigned)arg3 ;
-(unsigned)sizeOfMasterOutputProperty:(unsigned)arg1 withQualifier:(void*)arg2 ofSize:(unsigned)arg3 ;
-(BOOL)hasMasterGlobalProperty:(unsigned)arg1 ;
-(BOOL)hasProperty:(unsigned)arg1 scope:(unsigned)arg2 ofElement:(unsigned)arg3 ;
-(unsigned)sizeOfProperty:(unsigned)arg1 scope:(unsigned)arg2 ofElement:(unsigned)arg3 withQualifier:(void*)arg4 ofSize:(unsigned)arg5 ;
-(BOOL)getProperty:(unsigned)arg1 scope:(unsigned)arg2 ofElement:(unsigned)arg3 withData:(void*)arg4 ofSize:(unsigned*)arg5 withQualifier:(void*)arg6 ofSize:(unsigned)arg7 ;
-(BOOL)setProperty:(unsigned)arg1 scope:(unsigned)arg2 ofElement:(unsigned)arg3 withData:(void*)arg4 ofSize:(unsigned)arg5 withQualifier:(void*)arg6 ofSize:(unsigned)arg7 ;
-(BOOL)isPropertySettable:(unsigned)arg1 scope:(unsigned)arg2 ofElement:(unsigned)arg3 ;
-(BOOL)onQueue:(id)arg1 forProperty:(unsigned)arg2 scope:(unsigned)arg3 ofElement:(unsigned)arg4 addListener:(/*^block*/id)arg5 ;
-(BOOL)onQueue:(id)arg1 forProperty:(unsigned)arg2 scope:(unsigned)arg3 ofElement:(unsigned)arg4 removeListener:(/*^block*/id)arg5 ;
-(NSArray *)ownedObjectIDs;
-(BOOL)hasInputProperty:(unsigned)arg1 ofElement:(unsigned)arg2 ;
-(BOOL)hasMasterInputProperty:(unsigned)arg1 ;
-(BOOL)hasOutputProperty:(unsigned)arg1 ofElement:(unsigned)arg2 ;
-(BOOL)hasMasterOutputProperty:(unsigned)arg1 ;
-(BOOL)hasGlobalProperty:(unsigned)arg1 ofElement:(unsigned)arg2 ;
-(unsigned)sizeOfInputProperty:(unsigned)arg1 ofElement:(unsigned)arg2 withQualifier:(void*)arg3 ofSize:(unsigned)arg4 ;
-(unsigned)sizeOfOutputProperty:(unsigned)arg1 ofElement:(unsigned)arg2 withQualifier:(void*)arg3 ofSize:(unsigned)arg4 ;
-(unsigned)sizeOfGlobalProperty:(unsigned)arg1 ofElement:(unsigned)arg2 withQualifier:(void*)arg3 ofSize:(unsigned)arg4 ;
-(BOOL)getInputProperty:(unsigned)arg1 ofElement:(unsigned)arg2 withData:(void*)arg3 ofSize:(unsigned*)arg4 withQualifier:(void*)arg5 ofSize:(unsigned)arg6 ;
-(BOOL)getOutputProperty:(unsigned)arg1 ofElement:(unsigned)arg2 withData:(void*)arg3 ofSize:(unsigned*)arg4 withQualifier:(void*)arg5 ofSize:(unsigned)arg6 ;
-(BOOL)getGlobalProperty:(unsigned)arg1 ofElement:(unsigned)arg2 withData:(void*)arg3 ofSize:(unsigned*)arg4 withQualifier:(void*)arg5 ofSize:(unsigned)arg6 ;
-(BOOL)setInputProperty:(unsigned)arg1 ofElement:(unsigned)arg2 withData:(void*)arg3 ofSize:(unsigned)arg4 withQualifier:(void*)arg5 ofSize:(unsigned)arg6 ;
-(BOOL)setOutputProperty:(unsigned)arg1 ofElement:(unsigned)arg2 withData:(void*)arg3 ofSize:(unsigned)arg4 withQualifier:(void*)arg5 ofSize:(unsigned)arg6 ;
-(BOOL)setGlobalProperty:(unsigned)arg1 ofElement:(unsigned)arg2 withData:(void*)arg3 ofSize:(unsigned)arg4 withQualifier:(void*)arg5 ofSize:(unsigned)arg6 ;
-(BOOL)isInputPropertySettable:(unsigned)arg1 ofElement:(unsigned)arg2 ;
-(BOOL)isMasterInputPropertySettable:(unsigned)arg1 ;
-(BOOL)isOutputPropertySettable:(unsigned)arg1 ofElement:(unsigned)arg2 ;
-(BOOL)isMasterOutputPropertySettable:(unsigned)arg1 ;
-(BOOL)isGlobalPropertySettable:(unsigned)arg1 ofElement:(unsigned)arg2 ;
-(BOOL)isMasterGlobalPropertySettable:(unsigned)arg1 ;
-(BOOL)onQueue:(id)arg1 forInputProperty:(unsigned)arg2 ofElement:(unsigned)arg3 addListener:(/*^block*/id)arg4 ;
-(BOOL)onQueue:(id)arg1 forMasterInputProperty:(unsigned)arg2 addListener:(/*^block*/id)arg3 ;
-(BOOL)onQueue:(id)arg1 forOutputProperty:(unsigned)arg2 ofElement:(unsigned)arg3 addListener:(/*^block*/id)arg4 ;
-(BOOL)onQueue:(id)arg1 forMasterOutputProperty:(unsigned)arg2 addListener:(/*^block*/id)arg3 ;
-(BOOL)onQueue:(id)arg1 forGlobalProperty:(unsigned)arg2 ofElement:(unsigned)arg3 addListener:(/*^block*/id)arg4 ;
-(BOOL)onQueue:(id)arg1 forMasterGlobalProperty:(unsigned)arg2 addListener:(/*^block*/id)arg3 ;
-(BOOL)onQueue:(id)arg1 forInputProperty:(unsigned)arg2 ofElement:(unsigned)arg3 removeListener:(/*^block*/id)arg4 ;
-(BOOL)onQueue:(id)arg1 forMasterInputProperty:(unsigned)arg2 removeListener:(/*^block*/id)arg3 ;
-(BOOL)onQueue:(id)arg1 forOutputProperty:(unsigned)arg2 ofElement:(unsigned)arg3 removeListener:(/*^block*/id)arg4 ;
-(BOOL)onQueue:(id)arg1 forMasterOutputProperty:(unsigned)arg2 removeListener:(/*^block*/id)arg3 ;
-(BOOL)onQueue:(id)arg1 forGlobalProperty:(unsigned)arg2 ofElement:(unsigned)arg3 removeListener:(/*^block*/id)arg4 ;
-(BOOL)onQueue:(id)arg1 forMasterGlobalProperty:(unsigned)arg2 removeListener:(/*^block*/id)arg3 ;
@end

