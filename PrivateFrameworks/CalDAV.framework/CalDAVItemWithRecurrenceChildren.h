/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CalDAVItemWithRecurrenceChildren : CoreDAVItem {

	NSMutableSet* _recurrences;

}

@property (nonatomic,retain) NSMutableSet * recurrences;              //@synthesize recurrences=_recurrences - In the implementation block
-(NSMutableSet *)recurrences;
-(void)setRecurrences:(NSMutableSet *)arg1 ;
-(id)copyParseRules;
-(void)addRecurrence:(id)arg1 ;
@end

