/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:58:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKRichComplicationBezelBaseTextView.h>
#import <libobjc.A.dylib/NTKMonogramComplicationDisplay.h>

@class NTKColoringLabel, NSString;

@interface NTKRichComplicationBezelMonogramView : NTKRichComplicationBezelBaseTextView <NTKMonogramComplicationDisplay> {

	NTKColoringLabel* _textLabel;
	NSString* _monogramText;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<NTKComplicationDisplayObserver> displayObserver; 
@property (assign,nonatomic) BOOL canUseCurvedText; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (assign,nonatomic) BOOL shouldUseTemplateColors; 
-(id)_labelFont;
-(void)setMonogramText:(id)arg1 ;
-(id)_createLabelViewWithFont:(id)arg1 ;
@end

