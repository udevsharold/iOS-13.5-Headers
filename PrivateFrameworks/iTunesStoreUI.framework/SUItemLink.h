/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface SUItemLink : NSObject <NSCopying> {

	long long _linkTarget;
	long long _linkType;
	NSString* _title;
	NSURL* _url;

}

@property (assign,nonatomic) long long linkTarget;              //@synthesize linkTarget=_linkTarget - In the implementation block
@property (assign,nonatomic) long long linkType;                //@synthesize linkType=_linkType - In the implementation block
@property (nonatomic,copy) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSURL * URL;                       //@synthesize url=_url - In the implementation block
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(long long)linkType;
-(void)setLinkType:(long long)arg1 ;
-(long long)linkTarget;
-(void)setLinkTarget:(long long)arg1 ;
@end

