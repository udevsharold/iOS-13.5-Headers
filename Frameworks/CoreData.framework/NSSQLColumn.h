/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLProperty.h>

@class NSString;

@interface NSSQLColumn : NSSQLProperty {

	NSString* _columnName;

}
-(void)dealloc;
-(id)description;
-(id)columnName;
-(unsigned char)sqlType;
-(unsigned)slot;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(void)_setSQLType:(unsigned char)arg1 ;
-(id)initForReadOnlyFetching;
-(void)setAllowAliasing:(BOOL)arg1 ;
-(void)_setColumnName:(id)arg1 ;
-(void)copyValuesForReadOnlyFetch:(id)arg1 ;
-(BOOL)allowAliasing;
-(id)initWithColumnName:(id)arg1 sqlType:(unsigned char)arg2 ;
-(unsigned)roughSizeEstimate;
-(unsigned)fetchIndex;
-(void)_setFetchIndex:(unsigned)arg1 ;
-(void)_setSlotIfDefault:(unsigned)arg1 ;
-(id)cloneForReadOnlyFetching;
@end

