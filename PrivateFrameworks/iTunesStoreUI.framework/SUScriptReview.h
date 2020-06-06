/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSURL, SKUIReviewMetadata, NSNumber, NSString;

@interface SUScriptReview : SUScriptObject {

	NSURL* _infoURL;
	SKUIReviewMetadata* _review;

}

@property (readonly) NSNumber * adamID; 
@property (retain) NSString * body; 
@property (readonly) id hasSavedDraft; 
@property (retain) NSString * infoURL; 
@property (retain) NSString * itemType; 
@property (retain) NSString * nickname; 
@property (retain) id nicknameIsConfirmed; 
@property (retain) NSNumber * rating; 
@property (retain) NSString * title; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)nickname;
-(void)setNickname:(NSString *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)_className;
-(void)setBody:(NSString *)arg1 ;
-(NSString *)body;
-(id)attributeKeys;
-(NSString *)itemType;
-(NSNumber *)rating;
-(void)setRating:(NSNumber *)arg1 ;
-(NSNumber *)adamID;
-(void)setItemType:(NSString *)arg1 ;
-(id)scriptAttributeKeys;
-(id)copyReview;
-(id)initWithReview:(id)arg1 ;
-(id)removeDraft;
-(id)restoreFromDraft;
-(id)saveAsDraft;
-(id)hasSavedDraft;
-(NSString *)infoURL;
-(id)nicknameIsConfirmed;
-(void)setInfoURL:(NSString *)arg1 ;
-(void)setNicknameIsConfirmed:(id)arg1 ;
@end

