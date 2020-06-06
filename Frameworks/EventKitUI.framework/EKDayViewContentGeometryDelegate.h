/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <libobjc.A.dylib/CUIKSingleDayTimelineGeometryDelegate.h>
#import <libobjc.A.dylib/EKDayOccurrenceViewDelegate.h>

@class EKDayViewContent, NSString;

@interface EKDayViewContentGeometryDelegate : NSObject <CUIKSingleDayTimelineGeometryDelegate, EKDayOccurrenceViewDelegate> {

	EKDayViewContent* _dayViewContent;
	CGRect _frame;
	CGRect _bounds;

}

@property (assign,nonatomic,__weak) EKDayViewContent * dayViewContent;              //@synthesize dayViewContent=_dayViewContent - In the implementation block
@property (assign,nonatomic) CGRect frame;                                          //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) CGRect bounds;                                         //@synthesize bounds=_bounds - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGRect displayedRect; 
@property (nonatomic,readonly) double hourHeight; 
@property (nonatomic,readonly) double topPadding; 
@property (nonatomic,readonly) double timeWidth; 
@property (nonatomic,readonly) BOOL originIsUpperLeft; 
-(NSString *)description;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(CGRect)frame;
-(void)setFrame:(CGRect)arg1 ;
-(double)topPadding;
-(BOOL)shouldReverseLayoutDirection;
-(void)setDayViewContent:(EKDayViewContent *)arg1 ;
-(CGPoint)pointForDate:(double)arg1 ;
-(double)dateForPoint:(CGPoint)arg1 ;
-(EKDayViewContent *)dayViewContent;
-(double)hourHeight;
-(double)timeWidth;
-(CGRect)displayedRect;
-(BOOL)originIsUpperLeft;
@end

