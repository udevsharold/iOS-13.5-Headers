/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAMicroblogMicroblogSearchResultPost.h>

@class NSURL, NSString;

@interface SAMicroblogMicroblogSearchResultNews : SAMicroblogMicroblogSearchResultPost

@property (nonatomic,copy) NSURL * articleURL; 
@property (nonatomic,copy) NSString * descriptionText; 
@property (nonatomic,copy) NSString * title; 
+(id)microblogSearchResultNews;
+(id)microblogSearchResultNewsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSURL *)articleURL;
-(void)setArticleURL:(NSURL *)arg1 ;
@end

