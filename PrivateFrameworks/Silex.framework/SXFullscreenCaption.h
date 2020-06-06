/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXTextSourceDataSource.h>

@protocol SXFullscreenCaptionDataSource;
@class NSString, SXFormattedText;

@interface SXFullscreenCaption : NSObject <SXTextSourceDataSource> {

	NSString* _text;
	SXFormattedText* _caption;
	id<SXFullscreenCaptionDataSource> _dataSource;

}

@property (nonatomic,readonly) NSString * text;                                                  //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) SXFormattedText * caption;                                        //@synthesize caption=_caption - In the implementation block
@property (nonatomic,__weak,readonly) id<SXFullscreenCaptionDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)text;
-(id<SXFullscreenCaptionDataSource>)dataSource;
-(SXFormattedText *)caption;
-(id)textStyleForIdentifier:(id)arg1 ;
-(id)componentTextStyleForTextSource:(id)arg1 inheritingFromDefaultStyles:(BOOL)arg2 ;
-(id)textResizerForTextSource:(id)arg1 ;
-(id)textRulesForTextSource:(id)arg1 ;
-(id)additionsForTextSource:(id)arg1 ;
-(id)inlineTextStylesForTextSource:(id)arg1 ;
-(id)contentSizeCategoryForTextSource:(id)arg1 ;
-(id)defaultComponentTextStyleForTextSource:(id)arg1 ;
-(id)defaultComponentTextStylesForTextSource:(id)arg1 ;
-(id)linkStyleForTextSource:(id)arg1 ;
-(id)initWithText:(id)arg1 dataSource:(id)arg2 ;
-(id)initWithCaption:(id)arg1 dataSource:(id)arg2 ;
@end

