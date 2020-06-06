/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSDateFormatter, PLDateRangeFormatter, NSString, NSArray;

@interface PLSearchIndexDateFormatter : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSDateFormatter* _dateFormatter;
	PLDateRangeFormatter* _dateRangeFormatter;
	NSString* _yearFormat;
	NSString* _monthFormat;
	NSString* _displayFormat;
	NSString* _parseFormat;
	NSArray* _monthSymbols;
	BOOL _didSetupLocaleAndFormats;

}
+(id)monthFormatForLocale:(id)arg1 ;
+(id)yearFormatForLocale:(id)arg1 ;
-(id)init;
-(id)newLocalizedComponentsFromDate:(id)arg1 includeMonth:(BOOL)arg2 ;
-(id)localizedMonthStringsFromDate:(id)arg1 ;
-(id)localizedSeasonNameFromDate:(id)arg1 ;
-(id)formattedDateRangeWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)_arrangedMonthSymbols;
-(void)_inqSetupDateFormatter;
-(void)_inqUpdateDateFormat:(id)arg1 ;
-(id)_inqNewLocalizedStringFromDate:(id)arg1 ;
-(id)newLocalizedStringFromDate:(id)arg1 ;
-(id)newLocalizedStringFromYear:(id)arg1 month:(id)arg2 ;
@end

