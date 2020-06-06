/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>
#import <SAObjects/SASetSingleClientState.h>

@class SASiriPresentationClientState, NSString;

@interface SASetSiriPresentationClientState : SABaseCommand <SAServerBoundCommand, SASetSingleClientState>

@property (nonatomic,retain) SASiriPresentationClientState * clientState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)setSiriPresentationClientState;
+(id)setSiriPresentationClientStateWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setClientState:(SASiriPresentationClientState *)arg1 ;
-(SASiriPresentationClientState *)clientState;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

