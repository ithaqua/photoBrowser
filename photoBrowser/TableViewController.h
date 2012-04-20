//
//  TableViewController.h
//  photoBrowser
//
//  Created by RD1 on 4/19/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AssetsLibrary/AssetsLibrary.h>

@interface TableViewController : UITableViewController {
    NSMutableArray *assets;
    ALAssetsLibrary *library;
}
@end
