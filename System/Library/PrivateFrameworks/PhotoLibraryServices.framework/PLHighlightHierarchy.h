/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet;

@interface PLHighlightHierarchy : NSObject {

	NSMutableSet* _moments;
	NSMutableSet* _dayHighlights;
	NSMutableSet* _dayGroupHighlights;

}

@property (nonatomic,readonly) NSMutableSet * moments;                         //@synthesize moments=_moments - In the implementation block
@property (nonatomic,readonly) NSMutableSet * dayHighlights;                   //@synthesize dayHighlights=_dayHighlights - In the implementation block
@property (nonatomic,readonly) NSMutableSet * dayGroupHighlights;              //@synthesize dayGroupHighlights=_dayGroupHighlights - In the implementation block
-(id)init;
-(NSMutableSet *)moments;
-(NSMutableSet *)dayGroupHighlights;
-(NSMutableSet *)dayHighlights;
-(void)addMoment:(id)arg1 ;
-(void)addDayHighlight:(id)arg1 ;
-(void)addDayGroupHighlight:(id)arg1 ;
-(void)_addMoment:(id)arg1 ;
-(void)_addDayHighlight:(id)arg1 ;
@end

