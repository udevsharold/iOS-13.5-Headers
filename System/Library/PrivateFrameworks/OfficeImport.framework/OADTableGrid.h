/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface OADTableGrid : NSObject {

	NSMutableArray* mColumns;

}
-(id)init;
-(id)description;
-(unsigned long long)columnCount;
-(id)columnAtIndex:(unsigned long long)arg1 ;
-(id)addColumn;
-(void)flipColumnsRTL;
@end
