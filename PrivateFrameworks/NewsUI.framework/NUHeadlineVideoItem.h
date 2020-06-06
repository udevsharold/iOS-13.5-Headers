/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsUI/NewsUI-Structs.h>
#import <libobjc.A.dylib/NUVideoItem.h>

@protocol NUAdContextProvider, FCHeadlineProviding;
@class NSURL, NSString, FCAssetHandle;

@interface NUHeadlineVideoItem : NSObject <NUVideoItem> {

	id<NUAdContextProvider> _adContextProvider;
	id<FCHeadlineProviding> _headline;

}

@property (nonatomic,copy,readonly) id<FCHeadlineProviding> headline;                      //@synthesize headline=_headline - In the implementation block
@property (nonatomic,copy,readonly) NSURL * videoURL; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,readonly) id<NUAdContextProvider> adContextProvider;                  //@synthesize adContextProvider=_adContextProvider - In the implementation block
@property (nonatomic,copy,readonly) NSString * callToActionTitle; 
@property (nonatomic,copy,readonly) NSURL * callToActionURL; 
@property (nonatomic,readonly) FCAssetHandle * nameImageAssetHandle; 
@property (nonatomic,copy,readonly) NSString * sourceName; 
@property (nonatomic,copy,readonly) NSString * articleID; 
@property (nonatomic,copy,readonly) NSString * sourceTagID; 
@property (getter=isHiddenFromFeeds,nonatomic,readonly) BOOL hiddenFromFeeds; 
@property (getter=isBoundToContext,nonatomic,readonly) BOOL boundToContext; 
@property (getter=isPaid,nonatomic,readonly) BOOL paid; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(NSString *)sourceName;
-(NSURL *)videoURL;
-(id<FCHeadlineProviding>)headline;
-(BOOL)isPaid;
-(NSString *)articleID;
-(BOOL)isHiddenFromFeeds;
-(BOOL)isBoundToContext;
-(FCAssetHandle *)nameImageAssetHandle;
-(NSURL *)callToActionURL;
-(NSString *)sourceTagID;
-(id)initWithHeadline:(id)arg1 ;
-(id<NUAdContextProvider>)adContextProvider;
-(NSString *)callToActionTitle;
@end

