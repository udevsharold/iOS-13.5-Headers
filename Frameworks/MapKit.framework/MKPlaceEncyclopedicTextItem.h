/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MKPlaceEncyclopedicRowViewItem.h>

@class NSString;

@interface MKPlaceEncyclopedicTextItem : NSObject <MKPlaceEncyclopedicRowViewItem> {

	NSString* label;
	NSString* value;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * label; 
@property (nonatomic,readonly) NSString * value; 
+(id)textItemWithLabel:(id)arg1 value:(id)arg2 ;
-(NSString *)value;
-(NSString *)label;
@end

