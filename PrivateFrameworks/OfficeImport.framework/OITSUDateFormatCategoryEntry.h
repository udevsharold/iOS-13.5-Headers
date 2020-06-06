/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableSet;

@interface OITSUDateFormatCategoryEntry : NSObject {

	unsigned short _separator;
	NSMutableArray* _formatters;
	NSMutableSet* _formatStrings;

}
-(unsigned short)separator;
-(id)formatStrings;
-(id)newDateFromString:(id)arg1 forceAllowAMPM:(BOOL)arg2 successfulFormatString:(id*)arg3 perfect:(BOOL*)arg4 ;
-(id)initWithSeparator:(unsigned short)arg1 ;
-(void)addFormat:(id)arg1 locale:(id)arg2 ;
@end

