/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL;

@interface UIWebClipLinkTag : NSObject {

	BOOL _mediaMatchesPortraitOrientation;
	BOOL _mediaMatchesLandscapeOrientation;
	NSString* _href;
	NSString* _rel;
	NSString* _sizes;

}

@property (nonatomic,copy) NSString * href;                                      //@synthesize href=_href - In the implementation block
@property (nonatomic,readonly) NSURL * hrefURL; 
@property (nonatomic,copy) NSString * rel;                                       //@synthesize rel=_rel - In the implementation block
@property (nonatomic,copy) NSString * sizes;                                     //@synthesize sizes=_sizes - In the implementation block
@property (assign,nonatomic) BOOL mediaMatchesPortraitOrientation;               //@synthesize mediaMatchesPortraitOrientation=_mediaMatchesPortraitOrientation - In the implementation block
@property (assign,nonatomic) BOOL mediaMatchesLandscapeOrientation;              //@synthesize mediaMatchesLandscapeOrientation=_mediaMatchesLandscapeOrientation - In the implementation block
-(NSString *)sizes;
-(NSURL *)hrefURL;
-(NSString *)href;
-(void)setHref:(NSString *)arg1 ;
-(NSString *)rel;
-(void)setRel:(NSString *)arg1 ;
-(void)setSizes:(NSString *)arg1 ;
-(BOOL)mediaMatchesPortraitOrientation;
-(void)setMediaMatchesPortraitOrientation:(BOOL)arg1 ;
-(BOOL)mediaMatchesLandscapeOrientation;
-(void)setMediaMatchesLandscapeOrientation:(BOOL)arg1 ;
@end

