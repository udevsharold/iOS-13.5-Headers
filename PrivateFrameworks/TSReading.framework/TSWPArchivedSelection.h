/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSPObject.h>

@class TSWPSelection;

@interface TSWPArchivedSelection : TSPObject {

	TSWPSelection* _selection;

}

@property (nonatomic,retain) TSWPSelection * selection;              //@synthesize selection=_selection - In the implementation block
-(void)dealloc;
-(id)initWithContext:(id)arg1 ;
-(TSWPSelection *)selection;
-(void)setSelection:(TSWPSelection *)arg1 ;
@end

