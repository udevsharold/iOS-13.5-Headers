/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSUUID;


@protocol NWNetworkAgent
@property (nonatomic,copy) NSString * agentDescription; 
@property (nonatomic,copy) NSUUID * agentUUID; 
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (assign,getter=isKernelActivated,nonatomic) BOOL kernelActivated; 
@property (assign,getter=isUserActivated,nonatomic) BOOL userActivated; 
@property (assign,getter=isVoluntary,nonatomic) BOOL voluntary; 
@property (assign,getter=isSpecificUseOnly,nonatomic) BOOL specificUseOnly; 
@property (assign,getter=isNetworkProvider,nonatomic) BOOL networkProvider; 
@property (assign,getter=isNexusProvider,nonatomic) BOOL nexusProvider; 
@property (assign,nonatomic) BOOL supportsBrowseRequests; 
@property (assign,nonatomic) BOOL supportsResolveRequests; 
@property (assign,nonatomic) BOOL requiresAssert; 
@property (assign,nonatomic) BOOL updateClientsImmediately; 
@optional
-(void)setNetworkProvider:(BOOL)arg1;
-(void)setNexusProvider:(BOOL)arg1;
-(BOOL)updateClientsImmediately;
-(BOOL)supportsResolveRequests;
-(BOOL)supportsBrowseRequests;
-(void)unassertAgentWithOptions:(id)arg1;
-(BOOL)assertAgentWithOptions:(id)arg1;
-(BOOL)startAgentWithOptions:(id)arg1;
-(void)closeNexusWithOptions:(id)arg1;
-(BOOL)requestNexusWithOptions:(id)arg1;
-(BOOL)isSpecificUseOnly;
-(BOOL)isNetworkProvider;
-(BOOL)isNexusProvider;
-(BOOL)requiresAssert;
-(void)setSpecificUseOnly:(BOOL)arg1;
-(void)setSupportsBrowseRequests:(BOOL)arg1;
-(void)setSupportsResolveRequests:(BOOL)arg1;
-(void)setRequiresAssert:(BOOL)arg1;
-(void)setUpdateClientsImmediately:(BOOL)arg1;

@required
+(id)agentDomain;
+(id)agentType;
+(id)agentFromData:(id)arg1;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1;
-(void)setUserActivated:(BOOL)arg1;
-(void)setVoluntary:(BOOL)arg1;
-(NSString *)agentDescription;
-(void)setAgentDescription:(id)arg1;
-(id)copyAgentData;
-(NSUUID *)agentUUID;
-(BOOL)isKernelActivated;
-(BOOL)isUserActivated;
-(BOOL)isVoluntary;
-(void)setKernelActivated:(BOOL)arg1;
-(void)setAgentUUID:(id)arg1;

@end

