/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class SAUIAppPunchOut, SASportsMetadata, NSString;

@interface SASportsAthleteComparisonSnippetItemDetails : AceObject <SAAceSerializable>

@property (nonatomic,retain) SAUIAppPunchOut * leagueAppPunchOut; 
@property (nonatomic,retain) SASportsMetadata * metadata; 
@property (nonatomic,retain) SAUIAppPunchOut * providerPunchOut; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)athleteComparisonSnippetItemDetails;
+(id)athleteComparisonSnippetItemDetailsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setMetadata:(SASportsMetadata *)arg1 ;
-(SASportsMetadata *)metadata;
-(id)encodedClassName;
-(SAUIAppPunchOut *)leagueAppPunchOut;
-(void)setLeagueAppPunchOut:(SAUIAppPunchOut *)arg1 ;
-(SAUIAppPunchOut *)providerPunchOut;
-(void)setProviderPunchOut:(SAUIAppPunchOut *)arg1 ;
@end

