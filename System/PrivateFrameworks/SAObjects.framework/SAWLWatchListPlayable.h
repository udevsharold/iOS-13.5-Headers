/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class SAWLWatchListChannelDetails, NSURL, NSString;

@interface SAWLWatchListPlayable : AceObject <SAAceSerializable>

@property (nonatomic,retain) SAWLWatchListChannelDetails * channelDetails; 
@property (assign,nonatomic) BOOL entitled; 
@property (assign,nonatomic) BOOL installed; 
@property (nonatomic,copy) NSURL * playURL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)watchListPlayable;
+(id)watchListPlayableWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(BOOL)entitled;
-(id)encodedClassName;
-(BOOL)installed;
-(void)setEntitled:(BOOL)arg1 ;
-(SAWLWatchListChannelDetails *)channelDetails;
-(void)setChannelDetails:(SAWLWatchListChannelDetails *)arg1 ;
-(void)setInstalled:(BOOL)arg1 ;
-(NSURL *)playURL;
-(void)setPlayURL:(NSURL *)arg1 ;
@end
