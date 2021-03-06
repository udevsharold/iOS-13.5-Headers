/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKTableViewCell.h>
#import <UIKit/UITextViewDelegate.h>

@class UITextView, _MKUILabel, NSLayoutConstraint, NSDate, NSString;

@interface MKTransitIncidentDetailCell : MKTableViewCell <UITextViewDelegate> {

	UITextView* _descriptionLabel;
	_MKUILabel* _lastUpdatedLabel;
	NSLayoutConstraint* _descriptionFirstBaselineToTopConstraint;
	NSLayoutConstraint* _descriptionLastBaselineToBottomConstraint;
	NSLayoutConstraint* _lastUpdatedFirstBaselineToDescriptionFirstBaselineConstraint;
	NSLayoutConstraint* _lastUpdatedLastBaselineToBottomConstraint;
	NSDate* _lastUpdated;

}

@property (nonatomic,copy) NSString * incidentDescription; 
@property (nonatomic,retain) NSDate * lastUpdated;                      //@synthesize lastUpdated=_lastUpdated - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)updateConstraints;
-(void)didMoveToWindow;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(NSDate *)lastUpdated;
-(void)setLastUpdated:(NSDate *)arg1 ;
-(NSString *)incidentDescription;
-(void)setIncidentDescription:(NSString *)arg1 ;
-(void)infoCardThemeChanged;
-(void)_contentSizeCategoryDidChange;
-(void)_updateConstraintValues;
-(void)_setConstraints;
-(void)_updateLastUpdatedLabel;
@end

