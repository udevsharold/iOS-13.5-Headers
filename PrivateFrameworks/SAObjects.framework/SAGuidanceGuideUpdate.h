/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SAGuidanceGuideSnippet, NSNumber, NSString, SAGuidanceSuggestedUtterances;

@interface SAGuidanceGuideUpdate : SABaseClientBoundCommand

@property (nonatomic,retain) SAGuidanceGuideSnippet * guideSnippet; 
@property (nonatomic,copy) NSNumber * guideTag; 
@property (nonatomic,copy) NSString * languageCode; 
@property (nonatomic,retain) SAGuidanceSuggestedUtterances * suggestedUtterances; 
+(id)guideUpdate;
+(id)guideUpdateWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)languageCode;
-(id)groupIdentifier;
-(void)setLanguageCode:(NSString *)arg1 ;
-(id)encodedClassName;
-(void)setSuggestedUtterances:(SAGuidanceSuggestedUtterances *)arg1 ;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(SAGuidanceGuideSnippet *)guideSnippet;
-(void)setGuideSnippet:(SAGuidanceGuideSnippet *)arg1 ;
-(NSNumber *)guideTag;
-(void)setGuideTag:(NSNumber *)arg1 ;
-(SAGuidanceSuggestedUtterances *)suggestedUtterances;
@end

